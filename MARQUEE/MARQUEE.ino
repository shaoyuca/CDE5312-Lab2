#include <Adafruit_NeoPixel.h>

// Pin to use to send signals to WS2812B
#define LED_PIN 6

// Number of WS2812B LEDs attached to the Arduino
#define LED_COUNT 12

// Setting up the NeoPixel library
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(255);
  strip.show(); 
}

void loop() {
  // Do a theater marquee effect in various colors...
  theaterChase(strip.Color(255, 255, 255), 50); // White
  theaterChase(strip.Color(255,   0,   0), 50); // Red
  theaterChase(strip.Color(  0,   0, 255), 50); // Blue
}

// Theater-marquee-style chasing lights. Pass in a color, and 
// a delay time (in ms) between frames.
void theaterChase(uint32_t color, int wait) {
  for(int a=0; a<10; a++) {  // Repeat 10 times...
    for(int b=0; b<3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in steps of 3...
      for(int c=b; c<strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show(); // Update strip with new contents
      delay(wait);  // Pause for a moment
    }
  }
}