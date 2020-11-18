/*
Garrett summers
 
*/
int pin=11;
int piin=9;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);
  pinMode(piin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin,LOW );   // turn the LED on (HIGH is the voltage level)

  digitalWrite(piin, HIGH);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(pin, HIGH); 
  digitalWrite(piin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);          // wait for a second
}
