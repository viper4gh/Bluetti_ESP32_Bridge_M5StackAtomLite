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

#define MAX_DISCONNECTED_TIME_UNTIL_REBOOT 5 //device will reboot when wlan/BT/MQTT is not connectet within x Minutes
#define SLEEP_TIME_ON_BT_NOT_AVAIL 2 //device will sleep x minutes if restarted is triggered by bluetooth error
                                     //set to 0 to disable
#define DEVICE_STATE_UPDATE  5
#define DEVICE_STATE_STATUS_UPDATE  2.5 //Was 0.5 in original branc which is half the DEVICE_STATE_UPDATE value, kept the ratio
#define MSG_VIEWER_ENTRY_COUNT 20 //number of lines for web message viewer
#define MSG_VIEWER_REFRESH_CYCLE 5 //refresh time for website data in seconds

#ifndef BLUETTI_TYPE
#define BLUETTI_TYPE BLUETTI_AC200M  //default: BLUETTI_AC300
#endif

#define USE_FASTLED false  // use FastLED library to control a RGB LED, like on the M5Stack Atom Lite, if set to true you have to add the FastLED lib to the lib deps
#define LED_PIN 27  // used GPIO Pin for RGB LED - 27 is used by M5 Stack Atom Lite
#define LED_MAX_DISCONNECTED_TIME 30  // LED will show the color defined with LED_COLOR_LAST_MESSAGE after that time of seconds when wlan/BT/MQTT is not connected
// LED colors definition, on startup you see the colors for successful connection of each. If you see the color for ALL_WORKING and the color then switches to another one you have a problem with this one.
// The colors values are from CRGB definition: http://fastled.io/docs/3.1/group___pixeltypes.html#gaeb40a08b7cb90c1e21bd408261558b99
#define LED_COLOR_WIFI Yellow
#define LED_COLOR_MQTT Magenta
#define LED_COLOR_BLUETOOTH Blue
#define LED_COLOR_LAST_MESSAGE Aqua
#define LED_COLOR_ALL_WORKING Green

#endif
