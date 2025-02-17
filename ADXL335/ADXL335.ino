/*
 * Reads in the x, y, and z accelerometer values from the ADXL335. See wiring diagram here: 
 * https://learn.adafruit.com/adafruit-analog-accelerometer-breakouts/arduino-wiring
 * 
 * To calibrate the ADXL335, read this tutorial:
 * https://learn.adafruit.com/adafruit-analog-accelerometer-breakouts/calibration-and-programming
 * 
 * Refer from Jon Froehlich
 * http://makeabilitylab.io
 */

const int ACCELX_INPUT = A5; // accel x is hooked up to A5
const int ACCELY_INPUT = A4; // accel y is hooked up to A4
const int ACCELZ_INPUT = A3; // accel z is hooked up to A3

void setup() {
  Serial.begin(9600); // to print values to the screen
}

void loop() {

  int accelX = analogRead(ACCELX_INPUT);
  delay(1); // recall that we want to delay by 1ms between consecutive analogReads
  int accelY = analogRead(ACCELY_INPUT);
  delay(1); // recall that we want to delay by 1ms between consecutive analogReads
  int accelZ = analogRead(ACCELZ_INPUT);

  // Print values to serial
  Serial.print(accelX);
  Serial.print(",");
  Serial.print(accelY);
  Serial.print(",");
  Serial.print(accelZ);
  Serial.println();
}