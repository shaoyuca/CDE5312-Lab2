// Tri-Color LED connections: same as sensor number ------ R11, B10, G9 ------
// ****** R pin to 11 ****** 
// ******  G pin to 9 ****** 
// ******  B pin to 10 ****** 
// ******  + pin to + ****** 


// This example uses a tri-color, also known as an RGB 
// (Red / Green / Blue) LED.
// Create integer variables for our LED pins:

int RGB_blue = 11; // connect R to 11
int RGB_red = 10; // connect B to 10
int RGB_green = 9; // connect G to 9


void setup()
{
  // Make all of our LED pins outputs:

  pinMode(RGB_red, OUTPUT);
  pinMode(RGB_green, OUTPUT);
  pinMode(RGB_blue, OUTPUT);

}

void loop()
{

// In the analogWrite functions:
  // 0 is off
  // 128 is halfway on (used for the tertiary colors)
  // 255 is full brightness.
  // But because this particular LED is common anode, we will need to reverse these 
  // numbers to display correctly:
  // 255 is off
  // 128 remains halfway on
  // 0 is full brightness.

  // Red

  analogWrite(RGB_red,0);
  analogWrite(RGB_green,255);
  analogWrite(RGB_blue,255);
  delay(1000);

  // Orange

  analogWrite(RGB_red,0);
  analogWrite(RGB_green,128);
  analogWrite(RGB_blue,255);
  delay(1000);

  // Yellow

  analogWrite(RGB_red,0);
  analogWrite(RGB_green,0);
  analogWrite(RGB_blue,255);
  delay(1000);

  // Chartruese

  analogWrite(RGB_red,128);
  analogWrite(RGB_green,0);
  analogWrite(RGB_blue,255);
  delay(1000);

  // Green

  analogWrite(RGB_red,255);
  analogWrite(RGB_green,0);
  analogWrite(RGB_blue,255);
  delay(1000);

  // Spring Green

  analogWrite(RGB_red,255);
  analogWrite(RGB_green,0);
  analogWrite(RGB_blue,128);
  delay(1000);

  // Cyan

  analogWrite(RGB_red,255);
  analogWrite(RGB_green,0);
  analogWrite(RGB_blue,0);
  delay(1000);

  // Azure

  analogWrite(RGB_red,255);
  analogWrite(RGB_green,128);
  analogWrite(RGB_blue,0);
  delay(1000);

  // Blue

  analogWrite(RGB_red,255);
  analogWrite(RGB_green,255);
  analogWrite(RGB_blue,0);
  delay(1000);

  // Violet

  analogWrite(RGB_red,128);
  analogWrite(RGB_green,255);
  analogWrite(RGB_blue,0);
  delay(1000);

  // Magenta

  analogWrite(RGB_red,0);
  analogWrite(RGB_green,255);
  analogWrite(RGB_blue,0);
  delay(1000);

  // Rose

  analogWrite(RGB_red,0);
  analogWrite(RGB_green,255);
  analogWrite(RGB_blue,128);
  delay(1000);

  // White

  analogWrite(RGB_red,0);
  analogWrite(RGB_green,0);
  analogWrite(RGB_blue,0);
  delay(1000);

}