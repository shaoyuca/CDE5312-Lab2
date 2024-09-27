/******************************************************************************

LilyPad Pixel Board - Set Colors Example
Angela Sheehan
SparkFun Electronics

Adapted from SparkFun's WS2812 Breakout Hookup Guide code examples

This code demonstrates setting colors on individual LilyPad Pixel Boards using
the NeoPixel library.

******************************************************************************/

#include <Adafruit_NeoPixel.h>

#define PIN 6  //Which pin the pixels are connected to
#define LED_COUNT 5  // Number of pixels used: 5 as an example

// Create an instance of the Adafruit_NeoPixel class called "strip".
// That'll be what we refer to from here on...
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
 strip.begin();  // Start up the LED strip
 strip.show();   // LEDs don't actually update until you call this function
}

void loop()
{
  strip.setPixelColor(0, 255, 0, 0); // Set the first pixel to RED
  strip.setPixelColor(1, 0, 255, 0); // Set the second pixel to GREEN
  strip.setPixelColor(2, 0, 0, 255); // Set the third pixel to BLUE
  strip.setPixelColor(3, 255, 255, 0); // Set the fourth pixel to YELLOW
  strip.setPixelColor(4, 255, 0, 255); // Set the fifth pixel to MAGENTA
  strip.show(); //Display the colors
}
