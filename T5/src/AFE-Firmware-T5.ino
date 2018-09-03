/* AFE Firmware for smart home devices
  LICENSE: https://github.com/tschaban/AFE-Firmware/blob/master/LICENSE
  DOC: https://www.smartnydom.pl/afe-firmware-pl/ */

#include "AFE-MQTT.h"
#include <AFE-Data-Access.h>
#include <AFE-Device.h>
#include <AFE-Gate.h>
#include <AFE-LED.h>
#include <AFE-Relay.h>
#include <AFE-Sensor-DHT.h>
#include <AFE-Switch.h>
#include <AFE-Upgrader.h>
#include <AFE-Web-Server.h>
#include <AFE-WiFi.h>
//#include <Streaming.h>

AFEDataAccess Data;
AFEDevice Device;
AFEWiFi Network;
AFEMQTT Mqtt;
AFEWebServer WebServer;
AFELED Led;
AFESwitch Switch[sizeof(Device.configuration.isSwitch)];
AFERelay Relay[sizeof(Device.configuration.isRelay)];
MQTT MQTTConfiguration;
AFESensorDHT SensorDHT;
GATE GateState;
AFEGate Gate;

float temperature;
float humidity;

void setup() {

  Serial.begin(115200);
  delay(10);

  /* Turn off publishing information to Serial */
  Serial.swap();

  /* Checking if the device is launched for a first time. If so it sets up
   * the device (EEPROM) */
  if (Device.isFirstTimeLaunch()) {
    Device.setDevice();
  }

  /* Perform post upgrade changes (if any) */
  AFEUpgrader Upgrader;
  if (Upgrader.upgraded()) {
    Upgrader.upgrade();
  }
  Upgrader = {};

  /* Checking if WiFi is onfigured, if not than it runs access point mode */
  if (Device.getMode() != MODE_ACCESS_POINT && !Device.isConfigured()) {
    Device.reboot(MODE_ACCESS_POINT);
  }

  /* Initialzing network */
  Network.begin(Device.getMode());

  /* Initializing LED, checking if LED exists is made on Class level  */
  uint8_t systeLedID = Data.getSystemLedID();
  if (systeLedID > 0) {
    Led.begin(systeLedID - 1);
  }

  /* If device in configuration mode then start LED blinking */
  if (Device.getMode() != MODE_NORMAL) {
    Led.blinkingOn(100);
  }

  /* Initializing MQTT */
  if (Device.getMode() != MODE_ACCESS_POINT && Device.configuration.mqttAPI) {
    MQTTConfiguration = Data.getMQTTConfiguration();
    Mqtt.begin();
  }
  Network.connect();
  /* Initializing HTTP WebServer */
  WebServer.handle("/", handleHTTPRequests);
  WebServer.handle("/favicon.ico", handleFavicon);
  WebServer.begin();

  /* Initializing gate */
  Gate.begin();

  /* Initializing relay */
  initRelay();
  /* Initializing switches */
  initSwitch();

  /* Initializing DHT Sensor */
  initDHTSensor();

  GateState = Data.getGateConfiguration();
}

void loop() {

  if (Device.getMode() != MODE_ACCESS_POINT) {
    if (Network.connected()) {
      if (Device.getMode() == MODE_NORMAL) {
        /* Connect to MQTT if not connected */
        if (Device.configuration.mqttAPI) {
          Mqtt.connected() ? Mqtt.loop() : Mqtt.connect();
        }
        WebServer.listener();

        Gate.listener();

        mainHTTPRequestsHandler();
        mainRelay();
        mainSwitch();
        mainGate();
        mainDHTSensor();

      } else { // Configuration Mode
        WebServer.listener();
      }
    } else { // Device not connected to WiFi. Reestablish connection
      Network.connect();
    }
  } else { // Access Point Mode
    Network.APListener();
    WebServer.listener();
  }

  mainSwitchListener();

  Led.loop();
}
