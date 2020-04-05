/* AFE Firmware for smart home devices, Website: https://afe.smartnydom.pl/ */

#ifndef _AFE_Configuration_h
#define _AFE_Configuration_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

/* Serial port speed */
//#define AFE_CONFIG_SERIAL_SPEED 9600
#define AFE_CONFIG_SERIAL_SPEED 115200

/* Upgrade types */
#define AFE_UPGRADE_NONE 0
#define AFE_UPGRADE_VERSION 1
#define AFE_UPGRADE_VERSION_TYPE 2

/* Device operating modes */
#define AFE_MODE_NORMAL 0
#define AFE_MODE_CONFIGURATION 1
#define AFE_MODE_ACCESS_POINT 2
#define AFE_MODE_NETWORK_NOT_SET 4
#define AFE_MODE_FIRST_TIME_LAUNCH 5

/* APIs */
#define AFE_API_STANDARD 0
#define AFE_API_DOMOTICZ 1

/* URLs to AFE WebService */
#define AFE_URL_VALIDATE_KEY "http://api.smartnydom.pl/key/validate/"
#define AFE_URL_ADD_KEY "http://api.smartnydom.pl/key/add/"
#define AFE_KEY_FREQUENCY_VALIDATION 1440

/* Types of URL requests */
#define AFE_SERVER_CMD_SAVE 1
#define AFE_SERVER_CMD_NONE 0

/* Not existing hardware item. Used as a default value */
#define AFE_HARDWARE_ITEM_NOT_EXIST 255

/* Types of the devices */
#if defined(AFE_DEVICE_SONOFF_BASIC_V1)
#define AFE_DEVICE_TYPE_NAME "Sonoff Basic V1"
#define AFE_DEVICE_TYPE_ID 1
#elif defined(AFE_DEVICE_SONOFF_4CH)
#define AFE_DEVICE_TYPE_NAME "Sonoff 4CH"
#define AFE_DEVICE_TYPE_ID 2
#elif defined(AFE_DEVICE_SONOFF_DUAL_R2)
#define AFE_DEVICE_TYPE_NAME "Sonoff Dual R2"
#define AFE_DEVICE_TYPE_ID 3
#elif defined(AFE_DEVICE_SONOFF_TH10)
#define AFE_DEVICE_TYPE_NAME "Sonoff TH10"
#define AFE_DEVICE_TYPE_ID 4
#elif defined(AFE_DEVICE_SONOFF_TH16)
#define AFE_DEVICE_TYPE_NAME "Sonoff TH16"
#define AFE_DEVICE_TYPE_ID 5
#elif defined(AFE_DEVICE_SONOFF_TOUCH_1G)
#define AFE_DEVICE_TYPE_NAME "Sonoff Touch 1G"
#define AFE_DEVICE_TYPE_ID 6
#elif defined(AFE_DEVICE_SONOFF_TOUCH_2G)
#define AFE_DEVICE_TYPE_NAME "Sonoff Touch 2G"
#define AFE_DEVICE_TYPE_ID 7
#elif defined(AFE_DEVICE_SONOFF_TOUCH_3G)
#define AFE_DEVICE_TYPE_NAME "Sonoff Touch 3G"
#define AFE_DEVICE_TYPE_ID 8
#elif defined(AFE_DEVICE_SHELLY_1)
#define AFE_DEVICE_TYPE_NAME "Shelly 1"
#define AFE_DEVICE_TYPE_ID 20
#elif defined(AFE_DEVICE_iECSv20)
#define AFE_DEVICE_TYPE_NAME "iECS Gate Controller v2"
#define AFE_DEVICE_TYPE_ID 21
#elif defined(AFE_DEVICE_iECS_WHEATER_STATION_20)
#define AFE_DEVICE_TYPE_NAME "iECS Weather Station v2"
#define AFE_DEVICE_TYPE_ID 22
#else
#define AFE_DEVICE_TYPE_NAME "ESP Generic"
#define AFE_DEVICE_TYPE_ID 0
#endif

/* Basic Switch */
#if defined(T0_CONFIG)
#define AFE_FIRMWARE_VERSION "2.2.0"
#define AFE_FIRMWARE_TYPE 0


/* Define Hardware */
#define AFE_CONFIG_HARDWARE_SWITCH

#ifndef AFE_DEVICE_SHELLY_1
#define AFE_CONFIG_HARDWARE_LED
#endif

/* Max number of hardware items, per AFE version */
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_RELAYS 4
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_SWITCHES 5
#ifdef AFE_CONFIG_HARDWARE_LED
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_LEDS 5
#endif


/* Max number of hardware items per specyfic hardware device */
#if defined(AFE_DEVICE_SONOFF_BASIC_V1)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 4
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 2
#elif defined(AFE_DEVICE_SONOFF_4CH)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 4
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 4
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SONOFF_TOUCH_1G)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SONOFF_TOUCH_2G)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 2
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 2
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SONOFF_TOUCH_3G)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 3
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 3
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SHELLY_1)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_SWITCH_GPIO_DIGIT_INPUT // Sets switch DigitialPin to INPUT
/* Generic version */
#else
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 4
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 5
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 5
#endif



/* Default values for hardware items per specyfic hardware device */
#if defined(AFE_DEVICE_SONOFF_BASIC_V1)
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SONOFF_4CH)
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 4
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 4
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SONOFF_TOUCH_1G)
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SONOFF_TOUCH_2G)
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 2
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 2
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SONOFF_TOUCH_3G)
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 3
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 3
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#elif defined(AFE_DEVICE_SHELLY_1)
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 0
#define AFE_CONFIG_HARDWARE_SWITCH_GPIO_DIGIT_INPUT // Sets switch DigitialPin to INPUT
/* Generic version */
#else
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#endif

/* Functionalities */
#define AFE_CONFIG_FUNCTIONALITY_RELAY
#define AFE_CONFIG_FUNCTIONALITY_RELAY_AUTOONOFF

/* ADC Is not applicable for Shelly-1 */
#ifndef AFE_DEVICE_SHELLY_1
#define AFE_CONFIG_FUNCTIONALITY_ADC
#endif


/* Basic Switch + DS18B20 */
#elif defined(T1_CONFIG)
#define AFE_FIRMWARE_VERSION "1.4.0"
#define AFE_FIRMWARE_TYPE 1
#define AFE_CONFIG_HARDWARE_DS18B20
#define AFE_CONFIG_FUNCTIONALITY_RELAY
#define AFE_CONFIG_FUNCTIONALITY_RELAY_AUTOONOFF
#define AFE_CONFIG_FUNCTIONALITY_THERMOSTAT
#define AFE_CONFIG_FUNCTIONALITY_THERMAL_PROTECTION
/* Basic Switch + DTHxx */
#elif defined(T2_CONFIG)
#define AFE_FIRMWARE_VERSION "1.4.0"
#define AFE_FIRMWARE_TYPE 2
#define AFE_CONFIG_HARDWARE_DHXX
#define AFE_CONFIG_FUNCTIONALITY_RELAY
#define AFE_CONFIG_FUNCTIONALITY_RELAY_AUTOONOFF
#define AFE_CONFIG_FUNCTIONALITY_THERMOSTAT
#define AFE_CONFIG_FUNCTIONALITY_HUMIDISTAT
#define AFE_CONFIG_FUNCTIONALITY_THERMAL_PROTECTION
/* 4xRelay + PIR */
#elif defined(T3_CONFIG)
#define AFE_FIRMWARE_TYPE 3
#define AFE_FIRMWARE_VERSION "1.3.0"
#define AFE_CONFIG_HARDWARE_PIR
#define AFE_CONFIG_FUNCTIONALITY_RELAY
#define AFE_CONFIG_FUNCTIONALITY_RELAY_CONTROL_AUTOONOFF_TIME
/* 4xRelay */
#elif defined(T4_CONFIG)
#define AFE_FIRMWARE_VERSION "1.3.1"
#define AFE_FIRMWARE_TYPE 4
#define AFE_CONFIG_FUNCTIONALITY_RELAY
#define AFE_CONFIG_FUNCTIONALITY_RELAY_AUTOONOFF
/* Gate --------------------------------------------------------------------------*/
#elif defined(T5_CONFIG)
#define AFE_FIRMWARE_VERSION "2.2.0.B1"
#define AFE_FIRMWARE_TYPE 5


/* Define Hardware */
#define AFE_CONFIG_HARDWARE_SWITCH
#define AFE_CONFIG_HARDWARE_LED
#define AFE_CONFIG_FUNCTIONALITY_ADC

/* Max number of hardware items per AFE version */
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_RELAYS 2
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_SWITCHES 3
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_LEDS 3
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_CONTACTRONS 4
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_GATES 2


/* Max number of hardware items per specyfic hardware device */
#if defined(AFE_DEVICE_iECSv20)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 2
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 2
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_CONTACTRONS 3
#define AFE_CONFIG_HARDWARE_NUMBER_OF_GATES 2
/* Generic version */
#else
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 2
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 3
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 3
#define AFE_CONFIG_HARDWARE_NUMBER_OF_CONTACTRONS 4
#define AFE_CONFIG_HARDWARE_NUMBER_OF_GATES 2
#endif


/* Default values for hardware items per specyfic hardware device */
#if defined(AFE_DEVICE_iECSv20)
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_CONTACTRONS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_GATES 1
#else
/* Generic version */
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_CONTACTRONS 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_GATES 0
#endif


/* Functionalities */
#define AFE_CONFIG_FUNCTIONALITY_RELAY
#define AFE_CONFIG_FUNCTIONALITY_RELAY_AUTOONOFF
#define AFE_CONFIG_FUNCTIONALITY_RELAY_CONTROL_AUTOONOFF_TIME
#define AFE_CONFIG_FUNCTIONALITY_GATE
#define AFE_CONFIG_FUNCTIONALITY_ADC


/* Wheater Station */
#elif defined(T6_CONFIG)
#define AFE_FIRMWARE_VERSION "2.2.0"
#define AFE_FIRMWARE_TYPE 6

//#define AFE_CONFIG_API_DOMOTICZ_ENABLED

/* Functionalities */
#define AFE_CONFIG_FUNCTIONALITY_RELAY
#define AFE_CONFIG_FUNCTIONALITY_RELAY_AUTOONOFF
#define AFE_CONFIG_FUNCTIONALITY_ADC

#define AFE_CONFIG_HARDWARE_SWITCH
#define AFE_CONFIG_HARDWARE_LED
#define AFE_CONFIG_HARDWARE_BMEX80
#define AFE_CONFIG_HARDWARE_HPMA115S0
#define AFE_CONFIG_HARDWARE_BH1750
#define AFE_CONFIG_HARDWARE_AS3935

/* Max number of hardware items, per AFE version */
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_SWITCHES 3
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_LEDS 2
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_BMEX80 1
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_HPMA115S0 1
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_BH1750 1
#define AFE_CONFIG_HARDWARE_MAX_NUMBER_OF_AS3935 1

/* Max number of hardware items per specyfic hardware device */
#if defined(AFE_DEVICE_iECS_WHEATER_STATION_20)
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 3
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_BMEX80 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_HPMA115S0 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_BH1750 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_AS3935 1
#else
#define AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES 3
#define AFE_CONFIG_HARDWARE_NUMBER_OF_LEDS 2
#define AFE_CONFIG_HARDWARE_NUMBER_OF_BMEX80 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_HPMA115S0 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_BH1750 1
#define AFE_CONFIG_HARDWARE_NUMBER_OF_AS3935 1
#endif

/* Default values for hardware items per specyfic hardware device */
#if defined(AFE_DEVICE_iECS_WHEATER_STATION_20)
/* Whater Station V2 */
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_BMEX80 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_HPMA115S0 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_BH1750 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_AS3935 0
#else
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_RELAYS 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_SWITCHES 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_LEDS 1
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_BMEX80 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_HPMA115S0 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_BH1750 0
#define AFE_CONFIG_HARDWARE_DEFAULT_NUMBER_OF_AS3935 0
#endif

#endif


/* Configs related to a relay functionality */
#ifdef AFE_CONFIG_FUNCTIONALITY_RELAY
#ifndef AFE_CONFIG_HARDWARE_RELAY
#define AFE_CONFIG_HARDWARE_RELAY
#endif
#endif

/* Configs related to thermostat functionality */
#ifdef AFE_CONFIG_FUNCTIONALITY_THERMOSTAT
#ifndef AFE_CONFIG_FUNCTIONALITY_REGULATOR
#define AFE_CONFIG_FUNCTIONALITY_REGULATOR
#endif
#endif

/* Configs related to humidistat functionality */
#ifdef AFE_CONFIG_FUNCTIONALITY_HUMIDISTAT
#ifndef AFE_CONFIG_FUNCTIONALITY_REGULATOR
#define AFE_CONFIG_FUNCTIONALITY_REGULATOR
#endif
#endif

/* Configs related to analog input functionality */
#ifdef AFE_CONFIG_FUNCTIONALITY_ADC
#ifndef AFE_CONFIG_HARDWARE_ADC_VCC
#define AFE_CONFIG_HARDWARE_ADC_VCC
#endif
#endif

/* Configs related to automatic relay switch off functionality */
#ifdef AFE_CONFIG_FUNCTIONALITY_RELAY_AUTOONOFF
/* Below three enables Relay.autoTurnOff */
#ifndef AFE_CONFIG_RELAY_AUTOONOFF_LISTENER
#define AFE_CONFIG_RELAY_AUTOONOFF_LISTENER
#endif
#endif

/* Configs related to a gate functionality */
#ifdef AFE_CONFIG_FUNCTIONALITY_GATE
#ifndef AFE_CONFIG_RELAY_AUTOONOFF_LISTENER
#define AFE_CONFIG_RELAY_AUTOONOFF_LISTENER
#endif
#ifndef AFE_CONFIG_HARDWARE_RELAY
#define AFE_CONFIG_HARDWARE_RELAY
#endif
#ifndef AFE_CONFIG_HARDWARE_GATE
#define AFE_CONFIG_HARDWARE_GATE
#endif
#ifndef AFE_CONFIG_HARDWARE_CONTACTRON
#define AFE_CONFIG_HARDWARE_CONTACTRON
#endif
#endif


/* ***************** HARDWARE: Config and defaults *********************/

/* LED */
#ifdef AFE_CONFIG_HARDWARE_LED
#if defined(AFE_DEVICE_SONOFF_BASIC_V1)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO 13
#define  AFE_CONFIG_HARDWARE_LED_1_DEFAULT_GPIO 14
#elif defined(AFE_DEVICE_SONOFF_4CH)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  13
#elif defined(AFE_DEVICE_SONOFF_DUAL_R2)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  13
#elif defined(AFE_DEVICE_SONOFF_TH10)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  13
#elif defined(AFE_DEVICE_SONOFF_TH16)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  13
#elif defined(AFE_DEVICE_SONOFF_TOUCH_1G)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  13
#elif defined(AFE_DEVICE_SONOFF_TOUCH_2G)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  13
#elif defined(AFE_DEVICE_SONOFF_TOUCH_3G)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  13
#elif defined(AFE_DEVICE_iECSv20)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  2
#elif defined(AFE_DEVICE_WHEATER_STATION_iECSv20)
#define  AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  2
#else
#define AFE_CONFIG_HARDWARE_LED_0_DEFAULT_GPIO  2
#endif
#endif // AFE_CONFIG_HARDWARE_LED


/* SWITCH */
#ifdef AFE_CONFIG_HARDWARE_SWITCH
/* Switches, types */
#define AFE_SWITCH_TYPE_MONO 0 // Mono stable switch
#define AFE_SWITCH_TYPE_BI 1   // Bistable switch

#define AFE_SWITCH_ON 1
#define AFE_SWITCH_OFF 0

/* Switches functionalities */
#define AFE_SWITCH_FUNCTIONALITY_NONE 0  // does nothibg
#define AFE_SWITCH_FUNCTIONALITY_MULTI 1 // System switch and relay control
#define AFE_SWITCH_FUNCTIONALITY_RELAY 2 // Relay controll

/* Switche bouncing */
#define AFE_HARDWARE_SWITCH_DEFAULT_BOUNCING 50 // Bouncing for switch in miliseconds

#if defined(AFE_DEVICE_SONOFF_BASIC_V1)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_1_DEFAULT_GPIO 14
#define AFE_HARDWARE_SWITCH_2_DEFAULT_GPIO 1
#define AFE_HARDWARE_SWITCH_3_DEFAULT_GPIO 3
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_BI     // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_RELAY // Default for all switches exlcuding the first one
#elif defined(AFE_DEVICE_SONOFF_4CH)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_1_DEFAULT_GPIO 9
#define AFE_HARDWARE_SWITCH_2_DEFAULT_GPIO 10
#define AFE_HARDWARE_SWITCH_3_DEFAULT_GPIO 14
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_RELAY // Default for all switches exlcuding the first one
#elif defined(AFE_DEVICE_SONOFF_TOUCH_1G)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
// actually below 2 doesn't matter, they're needed to pharse the firmware ;)
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO  // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_RELAY // Default for all switches exlcuding the first one
#elif defined(AFE_DEVICE_SONOFF_TOUCH_2G)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_1_DEFAULT_GPIO 9
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_RELAY // Default for all switches exlcuding the first one
#elif defined(AFE_DEVICE_SONOFF_TOUCH_3G)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_1_DEFAULT_GPIO 9
#define AFE_HARDWARE_SWITCH_2_DEFAULT_GPIO 10
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_RELAY // Default for all switches exlcuding the first one
#elif defined(AFE_DEVICE_SHELLY_1)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 5
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_BI
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_RELAY
// actually below 2 doesn't matter, they're needed to pharse the firmware ;)
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO  // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_RELAY // Default for all switches exlcuding the first one
#elif defined(AFE_DEVICE_iECSv20)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_1_DEFAULT_GPIO 1
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_NONE // Default for all switches exlcuding the first one
#elif defined(AFE_DEVICE_iECS_WHEATER_STATION_20)
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_1_DEFAULT_GPIO 14
#define AFE_HARDWARE_SWITCH_2_DEFAULT_GPIO 13
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_NONE // Default for all switches exlcuding the first one
#else 
#define AFE_HARDWARE_SWITCH_0_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_1_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_2_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_3_DEFAULT_GPIO 0
#define AFE_HARDWARE_SWITCH_0_DEFAULT_TYPE AFE_SWITCH_TYPE_MONO
#define AFE_HARDWARE_SWITCH_X_DEFAULT_TYPE AFE_SWITCH_TYPE_BI // Default for all switches exlcuding the first one
#define AFE_HARDWARE_SWITCH_0_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_MULTI
#define AFE_HARDWARE_SWITCH_X_DEFAULT_FUNCTIONALITY AFE_SWITCH_FUNCTIONALITY_NONE // Default for all switches exlcuding the first one
#endif

#endif

/* RELAY */
#ifdef AFE_CONFIG_HARDWARE_RELAY

#define AFE_RELAY_ON 1        // Relay is ON
#define AFE_RELAY_OFF 0       // Relay is OFF

#if defined(AFE_DEVICE_SONOFF_BASIC_V1)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "relay"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3
#elif defined(AFE_DEVICE_SONOFF_4CH)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_GPIO 5
#define AFE_CONFIG_HARDWARE_RELAY_2_DEFAULT_GPIO 4
#define AFE_CONFIG_HARDWARE_RELAY_3_DEFAULT_GPIO 15
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "R1"
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_NAME "R2"
#define AFE_CONFIG_HARDWARE_RELAY_2_DEFAULT_NAME "R3"
#define AFE_CONFIG_HARDWARE_RELAY_3_DEFAULT_NAME "R4"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3
#elif defined(AFE_DEVICE_SONOFF_TOUCH_1G)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "relay"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3
#elif defined(AFE_DEVICE_SONOFF_TOUCH_2G)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_GPIO 5
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "R1"
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_NAME "R2"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3
#elif defined(AFE_DEVICE_SONOFF_TOUCH_3G)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_GPIO 5
#define AFE_CONFIG_HARDWARE_RELAY_2_DEFAULT_GPIO 4
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "R1"
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_NAME "R2"
#define AFE_CONFIG_HARDWARE_RELAY_2_DEFAULT_NAME "R3"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3
#elif defined(AFE_DEVICE_SHELLY_1)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 4
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "relay"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3
#elif defined(AFE_DEVICE_iECSv20)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 15
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "R1"
#define AFE_CONFIG_HARDWARE_RELAY_1_DEFAULT_NAME "R2"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 200
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 0
#elif defined(AFE_DEVICE_iECS_WHEATER_STATION_20)
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_NAME "relay"
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3

#else
#define AFE_CONFIG_HARDWARE_RELAY_0_DEFAULT_GPIO 12
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_TIME_TO_OFF 0
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_POWER_ON 3
#endif

#endif // AFE_CONFIG_HARDWARE_RELAY

/* DS18B20 Sensor */
#ifdef AFE_CONFIG_HARDWARE_DS18B20
#ifndef AFE_CONFIG_TEMPERATURE
#define AFE_CONFIG_TEMPERATURE
#endif
#endif

/* DHxx sesnors like DHT21,DHT22 */
#ifdef AFE_CONFIG_HARDWARE_DHXX
#ifndef AFE_CONFIG_TEMPERATURE
#define AFE_CONFIG_TEMPERATURE
#endif
#ifndef AFE_CONFIG_HUMIDITY
#define AFE_CONFIG_HUMIDITY
#endif
#endif

/* BMEX80 Sensors */
#ifdef AFE_CONFIG_HARDWARE_BMEX80
#ifndef AFE_CONFIG_TEMPERATURE
#define AFE_CONFIG_TEMPERATURE
#endif
#ifndef AFE_CONFIG_HUMIDITY
#define AFE_CONFIG_HUMIDITY
#endif
#ifndef AFE_CONFIG_PRESSURE
#define AFE_CONFIG_PRESSURE
#endif
#ifndef AFE_CONFIG_HARDWARE_I2C
#define AFE_CONFIG_HARDWARE_I2C
#endif
#ifndef AFE_CONFIG_DOMOTICZ_CUSTOME_SENSOR
#define AFE_CONFIG_DOMOTICZ_CUSTOME_SENSOR
#endif
#endif

/* BH1750 Sensor */
#ifdef AFE_CONFIG_HARDWARE_BH1750
#ifndef AFE_CONFIG_HARDWARE_I2C
#define AFE_CONFIG_HARDWARE_I2C
#endif
#endif

/* AS3935 Sensor */
#ifdef AFE_CONFIG_HARDWARE_AS3935

#define  AFE_DISTANCE_KM 1
#define  AFE_DISTANCE_MIL 2

#ifndef AFE_CONFIG_HARDWARE_I2C
#define AFE_CONFIG_HARDWARE_I2C
#endif
#endif

/* HPMA115S0 Sensor */
#ifdef AFE_CONFIG_HARDWARE_HPMA115S0
#define HPMA115S0_TYPE_PM25 0
#define HPMA115S0_TYPE_PM10 1
#ifndef AFE_CONFIG_HARDWARE_UART
#define AFE_CONFIG_HARDWARE_UART
#endif
#ifndef AFE_CONFIG_DOMOTICZ_CUSTOME_SENSOR
#define AFE_CONFIG_DOMOTICZ_CUSTOME_SENSOR
#endif
#endif

/* ADC Input */
#ifdef AFE_CONFIG_HARDWARE_ADC_VCC
#define AFE_CONFIG_API_JSON_ADC_DATA_LENGTH 200                   
#define AFE_CONFIG_HARDWARE_ADC_VCC_DEFAULT_GPIO 17
#define AFE_CONFIG_HARDWARE_ADC_VCC_DEFAULT_INTERVAL 60
#define AFE_CONFIG_HARDWARE_ADC_VCC_DEFAULT_NUMBER_OF_SAMPLES 1
#define AFE_CONFIG_HARDWARE_ADC_VCC_DEFAULT_MAX_VCC 1
#endif // AFE_CONFIG_HARDWARE_ADC_VCC

/* PIR Sesnor */
#ifdef AFE_CONFIG_HARDWARE_PIR
#ifndef AFE_CONFIG_RELAY_AUTOONOFF_LISTENER
#define AFE_CONFIG_RELAY_AUTOONOFF_LISTENER
#endif
#endif

/* Gate */
#ifdef AFE_CONFIG_HARDWARE_GATE
/* Gate's states */
#define AFE_GATE_OPEN 0           // Open
#define AFE_GATE_CLOSED 1         // Closed
#define AFE_GATE_PARTIALLY_OPEN 2 // Being opened
#define AFE_GATE_UNKNOWN 9        // Unknown state

/* Gate MQTT messages */
#define AFE_MQTT_GATE_OPEN "open"
#define AFE_MQTT_GATE_CLOSED "closed"
#define AFE_MQTT_GATE_PARTIALLY_OPEN "partiallyOpen"
#define AFE_MQTT_GATE_UNKNOWN "unknown"
#endif


/* Contactron */
#ifdef AFE_CONFIG_HARDWARE_CONTACTRON
/* Contactron types */
#define AFE_CONTACTRON_NO 0 // Normally open
#define AFE_CONTACTRON_NC 1 // Normally closed
/* Contactron states */
#define AFE_CONTACTRON_OPEN 0   // Open
#define AFE_CONTACTRON_CLOSED 1 // Closed
/* Contactron defaults */
#define AFE_CONFIG_HARDWARE_CONTACTRON_DEFAULT_BOUNCING 200
#define AFE_CONFIG_HARDWARE_CONTACTRON_DEFAULT_OUTPUT_TYPE AFE_CONTACTRON_NO
/* Contactron MQTT messages */
#define AFE_MQTT_CONTACTRON_OPEN "open"
#define AFE_MQTT_CONTACTRON_CLOSED "closed"
#endif

/* Temperature */
#ifdef AFE_CONFIG_TEMPERATURE
#define AFE_TEMPERATURE_UNIT_CELSIUS 1
#define AFE_TEMPERATURE_UNIT_FAHRENHEIT 2
#endif

/* Humidity */
#ifdef AFE_CONFIG_HUMIDITY
typedef enum {
  AFE_HUMIDITY_EXCELLENT = 1,
  AFE_HUMIDITY_GOOD = 2,
  AFE_HUMIDITY_FAIR = 3,
  AFE_HUMIDITY_POOR = 4,
  AFE_HUMIDITY_INADEQUATE = 5
} afe_humidity_ratings_t;
#endif


/* Pressure */
#ifdef AFE_CONFIG_PRESSURE
#define AFE_CONFIG_DEFAULT_SEA_LEVEL_PRESSURE 1013.25
#define AFE_PRESSURE_UNIT_HPA 1
#endif

/* UART Defaults */
#ifdef AFE_CONFIG_HARDWARE_UART
#define AFE_CONFIG_HARDWARE_UART_DEFAULT_RXD 3
#define AFE_CONFIG_HARDWARE_UART_DEFAULT_TXD 1
#endif

/* I2C Defaults */
#ifdef AFE_CONFIG_HARDWARE_I2C
#define AFE_CONFIG_HARDWARE_I2C_DEFAULT_SDA 4
#define AFE_CONFIG_HARDWARE_I2C_DEFAULT_SCL 5
#endif

/* HPMA115S0 Defaults */
#ifdef AFE_CONFIG_HARDWARE_HPMA115S0
#define AFE_CONFIG_HARDWARE_HPMA115S_DEFAULT_INTERVAL 300
#define AFE_CONFIG_HARDWARE_HPMA115S_DEFAULT_TIME_TO_MEASURE 0
#define AFE_CONFIG_API_JSON_HPMA115S0_DATA_LENGTH 220
#endif

/* BMx80 Defaults */
#ifdef AFE_CONFIG_HARDWARE_BMEX80
#define AFE_CONFIG_HARDWARE_BMEX80_DEFAULT_INTERVAL 60
#define AFE_CONFIG_API_JSON_BMEX80_DATA_LENGTH 730
#define AFE_BMX_UNKNOWN_SENSOR 255
#define AFE_BMP180_SENSOR 1
#define AFE_BME280_SENSOR 2
#define AFE_BME680_SENSOR 6

typedef enum {
  AFE_IAQ_GOOD = 1,
  AFE_IAQ_AVARAGE = 2,
  AFE_IAQ_LITTLE_BAD = 3,
  AFE_IAQ_BAD = 4,
  AFE_IAQ_WORSE = 5,
  AFE_IAQ_VERY_BAD = 5,
  AFE_IAQ_UNKNOWN = 255
} afe_iaq_ratings_t;

typedef enum {
  AFE_CO2_EXCELLENT = 1,
  AFE_CO2_GOOD = 2,
  AFE_CO2_FAIR = 3,
  AFE_CO2_POOR = 4,
  AFE_CO2_INADEQUATE = 5
} afe_co2_ratings_t;

#endif

/* BH1750 Defualts */
#ifdef AFE_CONFIG_HARDWARE_BH1750
#define AFE_CONFIG_HARDWARE_BH1750_DEFAULT_INTERVAL 60
#define AFE_CONFIG_HARDWARE_BH1750_DEFAULT_MODE 0
#define AFE_CONFIG_API_JSON_BH1750_DATA_LENGTH 180
#endif

/* AS3935 Defaults */
#ifdef AFE_CONFIG_HARDWARE_AS3935
#define AFE_CONFIG_HARDWARE_AS3935_DEFAULT_WATCHDOG_THRESHOLD 1
#define AFE_CONFIG_HARDWARE_AS3935_DEFAULT_MINIMUM_NO_OF_SPIKES 1
#define AFE_CONFIG_HARDWARE_AS3935_DEFAULT_NOISE_FLOOR 1
#define AFE_CONFIG_HARDWARE_AS3935_DEFAULT_MAX_NOISE_FLOOR 7
#define AFE_CONFIG_HARDWARE_AS3935_DEFAULT_SPIKES_REJECTION_LEVEL 1
#define AFE_CONFIG_HARDWARE_AS3935_DEFAULT_UNKNOWN_DISTANCE 255
#define AFE_CONFIG_API_JSON_AS3935_DATA_LENGTH 200
#endif



/* Config sites IDs */
#define AFE_CONFIG_SITE_INDEX 0
#define AFE_CONFIG_SITE_DEVICE 1
#define AFE_CONFIG_SITE_NETWORK 2
#define AFE_CONFIG_SITE_MQTT 3
#define AFE_CONFIG_SITE_MQTT_TOPICS 4
#ifdef AFE_CONFIG_API_DOMOTICZ_ENABLED
#define AFE_CONFIG_SITE_DOMOTICZ 5
#endif // AFE_CONFIG_API_DOMOTICZ_ENABLED
#define AFE_CONFIG_SITE_LED 6
#ifdef AFE_CONFIG_HARDWARE_RELAY
#define AFE_CONFIG_SITE_RELAY 7
#endif // AFE_CONFIG_HARDWARE_RELAY
#ifdef AFE_CONFIG_HARDWARE_SWITCH
#define AFE_CONFIG_SITE_SWITCH 8
#endif // AFE_CONFIG_HARDWARE_SWITCH
#define AFE_CONFIG_SITE_PASSWORD 9
#define AFE_CONFIG_SITE_PRO_VERSION 10
#ifdef AFE_CONFIG_HARDWARE_ADC_VCC
#define AFE_CONFIG_SITE_ANALOG_INPUT 11
#endif // FE_CONFIG_HARDWARE_ADC_VCC
#ifdef AFE_CONFIG_HARDWARE_CONTACTRON
#define AFE_CONFIG_SITE_CONTACTRON 12
#endif // AFE_CONFIG_HARDWARE_CONTACTRON
#ifdef AFE_CONFIG_HARDWARE_GATE
#define AFE_CONFIG_SITE_GATE 13
#endif // AFE_CONFIG_HARDWARE_GATE
#define AFE_CONFIG_SITE_EXIT 14
#define AFE_CONFIG_SITE_RESET 15
#define AFE_CONFIG_SITE_POST_RESET 16
#define AFE_CONFIG_SITE_FIRST_TIME 17
#define AFE_CONFIG_SITE_FIRST_TIME_CONNECTING 18
#define AFE_CONFIG_SITE_UPGRADE 19
#define AFE_CONFIG_SITE_POST_UPGRADE 20
#ifdef AFE_CONFIG_HARDWARE_UART
#define AFE_CONFIG_SITE_UART 21
#endif // AFE_CONFIG_HARDWARE_UART
#ifdef AFE_CONFIG_HARDWARE_HPMA115S0
#define AFE_CONFIG_SITE_HPMA115S0 22
#endif // AFE_CONFIG_HARDWARE_HPMA115S0
#ifdef AFE_CONFIG_HARDWARE_BMEX80
#define AFE_CONFIG_SITE_BMEX80 23
#endif // AFE_CONFIG_HARDWARE_BMEX80
#ifdef AFE_CONFIG_HARDWARE_BH1750
#define AFE_CONFIG_SITE_BH1750 24
#endif // AFE_CONFIG_HARDWARE_BH1750
#ifdef AFE_CONFIG_HARDWARE_AS3935
#define AFE_CONFIG_SITE_AS3935 25
#endif // AFE_CONFIG_HARDWARE_AS3935
#ifdef AFE_CONFIG_HARDWARE_I2C
#define AFE_CONFIG_SITE_I2C 26
#endif // AFE_CONFIG_HARDWARE_I2C


/* ***************** APIs: Config and defaults *********************/

#ifdef AFE_CONFIG_HARDWARE_RELAY
#define AFE_CONFIG_HARDWARE_RELAY_DEFAULT_STATE_MQTT_CONNECTED 0 // Default State of relay after connection to MQTT Broker is established.
#ifndef AFE_CONFIG_API_PROCESS_REQUESTS
#define AFE_CONFIG_API_PROCESS_REQUESTS // Configuration paramters which enables processing MQTT incoming messages.
#endif // AFE_CONFIG_API_PROCESS_REQUESTS
#endif // AFE_CONFIG_HARDWARE_RELAY

/* Configs releated to Domoticz APIs */
#ifdef AFE_CONFIG_API_DOMOTICZ_ENABLED
#define AFE_DOMOTICZ_VERSION_0 0 // 4.10x
#define AFE_DOMOTICZ_VERSION_1 1 // 2020.x
#define AFE_DOMOTICZ_VERSION_DEFAULT AFE_DOMOTICZ_VERSION_0

#define AFE_CONFIG_API_HTTP_TIMEOUT 200 // Time for HTTP response. If 5000 than device goes to config mode if Domoticz is Off, button is pressed and HTTP Domoticz API is on
#define AFE_CONFIG_FUNCTIONALITY_MQTT_LWT
#define AFE_DOMOTICZ_DEFAULT_IDX 0 // Default value for IDX
#define AFE_FIRMARE_API AFE_API_DOMOTICZ // Type of the firmware API: DOMOTICZ
#define AFE_CONFIG_API_DOMOTICZ_TOPIC_IN "domoticz/in" // MQTT Topic for outgoing from AFE messages
#define AFE_CONFIG_API_DOMOTICZ_TOPIC_OUT "domoticz/out" // MQTT Topic Domoticz uses for publishing messages
#define AFE_CONFIG_API_JSON_BUFFER_SIZE 380 // Size of the incoming Domoticz MQTT Messages. It may be to small for messages that contains description
#define AFE_CONFIG_API_JSON_SWITCH_COMMAND_LENGTH 55 // Outgoing MQTT message size for switch
#define AFE_CONFIG_API_JSON_DEVICE_COMMAND_LENGTH 70  // Outgoing MQTT message size for custom sensor

#ifdef AFE_CONFIG_HARDWARE_GATE
#define AFE_CONFIG_API_JSON_GATE_COMMAND_LENGTH AFE_CONFIG_API_JSON_SWITCH_COMMAND_LENGTH
#define AFE_CONFIG_API_JSON_GATE_DATA_LENGTH 200 // Not checked
#endif

#ifdef AFE_CONFIG_HARDWARE_CONTACTRON
#define AFE_CONFIG_API_JSON_CONTACTRON_COMMAND_LENGTH AFE_CONFIG_API_JSON_SWITCH_COMMAND_LENGTH
#define AFE_CONFIG_API_JSON_CONTACTRON_DATA_LENGTH  200 // Not checked
#endif

#define AFE_CONFIG_API_DOMOTICZ_URL_LENGTH 190  // Outgoing url size for statuses updates to Domoticz
#define AFE_CONFIG_API_DOMOTICZ_IDX_CACHE_LENGTH AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS+1 // Size of the IDX cache
#else
#define AFE_CONFIG_FUNCTIONALITY_MQTT_LWT
#define AFE_FIRMARE_API AFE_API_STANDARD // Type of the firmware API: STANDRARD
#define AFE_CONFIG_API_MQTT_TOPICS_CACHE_LENGTH AFE_CONFIG_HARDWARE_NUMBER_OF_RELAYS+AFE_CONFIG_HARDWARE_NUMBER_OF_SWITCHES+1 // Size of topics cache

#endif // AFE_CONFIG_API_DOMOTICZ_ENABLED


#define AFE_CONFIG_MQTT_DEFAULT_TIMEOUT 5000 // Timeout to shorten wait time, useful to have it low if MQTT server is down
#define AFE_CONFIG_MQTT_DEFAULT_PORT 1883 // Default MQTT Broker port

/* Config releated to LWT Functionality */
#ifdef AFE_CONFIG_FUNCTIONALITY_MQTT_LWT
#ifndef AFE_CONFIG_API_PROCESS_REQUESTS
#define AFE_CONFIG_API_PROCESS_REQUESTS  // Configuration paramters which enables processing MQTT incoming messages.
#endif // AFE_CONFIG_API_PROCESS_REQUESTS
#endif // AFE_CONFIG_FUNCTIONALITY_MQTT_LWT

#if defined(AFE_CONFIG_API_DOMOTICZ_ENABLED) && defined(AFE_CONFIG_HUMIDITY)
/* Humidity Domoticz state*/
typedef enum {
  AFE_HUMIDITY_NORMAL = 0,
  AFE_HUMIDITY_COMFORTABLE = 1,
  AFE_HUMIDITY_DRY = 2,
  AFE_HUMIDITY_WET = 3,
} afe_humidity_domoticz_state_t;
#endif

/* ***************** Files: Config and defaults *********************/

/* Configuration files names */
#define AFE_FILE_DOMOTICZ_CONFIGURATION "cfg-domoticz-server.json"
#define AFE_FILE_DEVICE_UID "cfg-device-uid.json"
#define AFE_FILE_MQTT_BROKER_CONFIGURATION "cfg-mqtt-broker.json"
#define AFE_FILE_I2C_CONFIGURATION "cfg-i2c.json"
#define AFE_FILE_DEVICE_MODE "cfg-device-mode.json"
#define AFE_FILE_PRO_VERSION_CONFIGURATION "cfg-pro-version.json"
#define AFE_FILE_PASSWORD_CONFIGURATION "cfg-password.json"
#define AFE_FILE_DEVICE_CONFIGURATION "cfg-device.json"
#define AFE_FILE_FIRMWARE_CONFIGURATION "cfg-firmware.json"
#define AFE_FILE_NETWORK_CONFIGURATION "cfg-network.json"
#define AFE_FILE_SYSTEM_LED_CONFIGURATION "cfg-system-led.json"
#define AFE_FILE_ADC_CONFIGURATION "cfg-analog-input.json"
#define AFE_FILE_UART_CONFIGURATION "cfg-uart.json"



/* Configuration files, JSON Buffers.  */
#define AFE_CONFIG_FILE_BUFFER_DEVICE_UID 46 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_MQTT_BROKER 352 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_BH1750 230
#define AFE_CONFIG_FILE_BUFFER_I2C 54 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_DEVICE_MODE 31 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_PRO_VERSION 78 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_PASSWORD 72 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_DEVICE 405 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_FIRMWARE 145 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_NETWORK 375 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_LED 76 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_SYSTEM_LED 30 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_RELAY 240
#define AFE_CONFIG_FILE_BUFFER_RELAY_STATE 36 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_SWITCH 210
#define AFE_CONFIG_FILE_BUFFER_ADC 300
#define AFE_CONFIG_FILE_BUFFER_HPMA115S0 240
#define AFE_CONFIG_FILE_BUFFER_UART 54 // Verfied by ArduinoJson Assistant 
#define AFE_CONFIG_FILE_BUFFER_BMEX80 570
#define AFE_CONFIG_FILE_BUFFER_AS3935 240
#define AFE_CONFIG_FILE_BUFFER_CONTACTRON 200 // not verfied
#define AFE_CONFIG_FILE_BUFFER_GATE 300 // not verfied
#define AFE_CONFIG_FILE_BUFFER_GATE_STATE 34 // not verfied


#define AFE_RESPONSE_KEY_VALIDATION 135


#endif // _AFE_Configuration_h
