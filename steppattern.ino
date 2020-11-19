/*
 
GARRETT SUMMERS

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
 digitalWrite(pin,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(pin,HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);

  digitalWrite(piin, LOW); 
  delay(100);
  digitalWrite(piin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  

digitalWrite(piin,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(piin,HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);

  digitalWrite(pin, LOW); 
  delay(100);
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  

}
 
  
  
 
