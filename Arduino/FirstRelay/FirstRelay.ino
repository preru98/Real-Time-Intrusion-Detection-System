void setup() {
  
  pinMode(7, OUTPUT);             // initialize digital pin 7 as an output.
  digitalWrite(7, HIGH);          // initialize digital pin 7 as HIGH.
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, LOW);   // turn the Relay ON (LOW is the voltage level)
  delay(3000);                       // wait for 3 second
  digitalWrite(7, HIGH);    // turn the LED off by making the voltage HIGH again
  delay(3000);                       // wait for 3 second
}
