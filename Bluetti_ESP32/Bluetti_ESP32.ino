#include "BWifi.h"
#include "BTooth.h"
#include "MQTT.h"
#include "config.h"

// Viper 31.01.23
#if USE_FASTLED
  #include <FastLED.h>
  CRGB led[1];  // LED Array with on LED
#endif

unsigned long lastTime1 = 0;
unsigned long timerDelay1 = 3000;


void setup() {
  Serial.begin(115200);
  // Viper 26.01.23
  #if USE_FASTLED
    FastLED.addLeds<NEOPIXEL, LED_PIN>(led, 1);
    FastLED.clear();
    FastLED.setBrightness(30);
    led[0] = CRGB::Black;
    FastLED.show();
    delay(500);
    led[0] = CRGB::Red;
    FastLED.show();
  #endif

  #ifdef RELAISMODE
    pinMode(RELAIS_PIN, OUTPUT);
    #ifdef DEBUG
      Serial.println(F("deactivate relais contact"));
    #endif
    digitalWrite(RELAIS_PIN, RELAIS_LOW);
  #endif
  #ifdef SLEEP_TIME_ON_BT_NOT_AVAIL
    esp_sleep_enable_timer_wakeup(SLEEP_TIME_ON_BT_NOT_AVAIL * 60 * 1000000ULL);
  #endif
  initBWifi(false);
  initBluetooth();
  initMQTT();
}

void loop() {
  handleBluetooth();
  handleMQTT(); 
  handleWebserver();
}
