#ifndef CONFIG_H
#define CONFIG_H
#include "Arduino.h"

#define DEBUG                 1
//#define RESET_WIFI_SETTINGS   1

#define EEPROM_SALT 13374

#define DEVICE_NAME "BLUETTI-MQTT"
//#define BLUETTI_TYPE BLUETTI_EP500P

#define BLUETOOTH_QUERY_MESSAGE_DELAY 3000

#define RELAISMODE 1
#define RELAIS_PIN 22
#define RELAIS_LOW LOW
#define RELAIS_HIGH HIGH
#define LED_PIN 27  // used GPIO Pin for LED - 27 is used by M5 Stack Atom Lite

#define MAX_DISCONNECTED_TIME_UNTIL_REBOOT 5 //device will reboot when wlan/BT/MQTT is not connectet within x Minutes
#define SLEEP_TIME_ON_BT_NOT_AVAIL 2 //device will sleep x minutes if restarted is triggered by bluetooth error
                                     //set to 0 to disable
#define DEVICE_STATE_UPDATE  5
#define MSG_VIEWER_ENTRY_COUNT 20 //number of lines for web message viewer
#define MSG_VIEWER_REFRESH_CYCLE 5 //refresh time for website data in seconds

#ifndef BLUETTI_TYPE
  #define BLUETTI_TYPE BLUETTI_AC200M  //default: BLUETTI_AC300
#endif


#endif
