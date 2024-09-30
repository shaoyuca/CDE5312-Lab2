int sensorPin = A3;
// Create a variable to hold the light reading
int lightValue;
int ledPin = 3;
const int darkLevel = 50;
// initilize a dark level 

void setup()
{
    // Set sensorPin as an INPUT
    pinMode(sensorPin, INPUT);

    // Set pin A1 to use as a power pin for the light sensor
    // If using the LilyPad Development Board, comment out these lines of code
    pinMode(A1, OUTPUT);
    digitalWrite(A1, HIGH);

    // Initialize Serial, set the baud rate to 9600 bps.
    Serial.begin(9600);
}

void loop()
{
    // Read the light sensor's value and store in 'lightValue'
    lightValue = analogRead(sensorPin);

    // Print some descriptive text and then the value from the sensor
    Serial.print("Light value is:");
    Serial.println(lightValue);

    // Compare "lightValue" to the "dark" variable
    if (lightValue <= darkLevel) // If the reading is less then 'darkLevel'
    {
        digitalWrite(ledPin, HIGH); // Turn on LED
    }
    else // Otherwise, if "lightValue" is greater than "dark"
    {
        digitalWrite(ledPin, LOW);  // Turn off LED
    }

    // Delay so that the text doesn't scroll to fast on the Serial Monitor. 
    // Adjust to a larger number for a slower scroll.
    delay(100);
}