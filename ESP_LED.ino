const int ledPin = 4; // Change this to the pin where your LED is connected

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED on
  delay(10000); // Wait for 10 seconds
  digitalWrite(ledPin, LOW); // Turn LED off
  delay(10000); // Wait for 10 seconds before repeating
}
