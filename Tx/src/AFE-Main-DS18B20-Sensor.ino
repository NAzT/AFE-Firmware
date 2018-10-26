#if defined(T1_CONFIG)
/* Initializing sensor: DHT */
void initDS18B20Sensor() {
  if (Device.configuration.isDS18B20) {
    SensorDS18B20.begin();
  }
}

/* Main code for processing DH sesnor */
void mainDS18B20Sensor() {
  if (Device.configuration.isDS18B20) {

    /* Sensor: DS18B20 listener */
    SensorDS18B20.listener();

    if (SensorDS18B20.isReady()) {
      Led.on();
      temperature = SensorDS18B20.getLatest();

      for (uint8_t i = 0; i < sizeof(Device.configuration.isRelay); i++) {
        if (Device.configuration.isRelay[i]) {

          /* Thermostat listener */
          Relay[i].Thermostat.listener(temperature);

          /* Thermal Protection listener */
          Relay[i].ThermalProtection.listener(temperature);

          /* Relay control by thermostat code */
          if (Relay[i].Thermostat.isReady()) {
            if (Relay[i].Thermostat.getRelayState() == RELAY_ON &&
                !Relay[i].ThermalProtection.protectionOn()) {
              Relay[i].on();
            } else {
              Relay[i].off();
            }
            MQTTPublishRelayState(i);
            DomoticzPublishRelayState(i);
          }

          /* Checking if relay should be switched off based on device thermal
           * protection */
          if (Relay[i].get() == RELAY_ON &&
              Relay[i].ThermalProtection.protectionOn()) {
            Relay[i].off();
            MQTTPublishRelayState(i);
            DomoticzPublishRelayState(i);
          }
        }
      }

      /* Publishing temperature to MQTT Broker and Domoticz if enabled */
      MQTTPublishTemperature(temperature);
      DomoticzPublishTemperature(temperature);

      Led.off();
    }
  }
}
#endif
