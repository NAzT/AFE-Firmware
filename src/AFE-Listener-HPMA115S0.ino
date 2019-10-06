/* AFE Firmware for smart home devices, Website: https://afe.smartnydom.pl/ */

#ifdef AFE_CONFIG_HARDWARE_HPMA115S0

/* Initializing sensor */
void initializeHPMA115S0Sensor() {
  if (Device.configuration.noOfHPMA115S0s > 0) {
    Led.on();
    for (uint8_t i = 0; i < Device.configuration.noOfHPMA115S0s; i++) {
      ParticleSensor[i].begin(i);
    }
    Led.off();
  }
}

/* Main code for processing sesnor */
void HPMA115S0SensorEventsListener() {
  {
    if (Device.configuration.noOfHPMA115S0s > 0) {
      for (uint8_t i = 0; i < Device.configuration.noOfHPMA115S0s; i++) {
        ParticleSensor[i].listener();
        if (ParticleSensor[i].isReady()) {
#if AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS > 0
          Led.on();
#endif
          MQTTPublishParticleSensorData(i);
          DomoticzPublishParticleSensorData(i);
#if AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS > 0
          Led.off();
#endif
        }
      }
    }
  }
}
#endif
