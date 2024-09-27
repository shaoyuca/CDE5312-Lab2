#include <Adafruit_NeoPixel.h>

// Pin to use to send signals to WS2812B
#define LED_PIN 6

// Number of WS2812B LEDs attached to the Arduino: Here is 12
#define LED_COUNT 12

// Setting up the NeoPixel library
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();           // Initialize NeoPixel object
  strip.setBrightness(255); // Set BRIGHTNESS to the maximum (0-255)
}

void loop() {
  strip.clear(); // Set all pixel colors to 'off'

  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  for(int i = 0; i < LED_COUNT; i++) {
    // Set the i-th LED to pure red (R,G,B):
    strip.setPixelColor(i, 255, 0, 0);
  
    strip.show();   // Send the updated pixel colors to the hardware.
  
    delay(100); // Pause before next pass through loop
  }
}