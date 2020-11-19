/*
 
  Garrett Summers
  Shows how to light a red green blue led with different colours
*/

//The pins used need to PWM pins which have a line beside
//their numbers on the Arduino
int touchPin=6;
int redPin = 11;
int grePin = 10;
int bluPin = 9;
int on=0;
//zero is on off 1 is red 2 is green 3 is blue ig//

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(redPin, OUTPUT);
  pinMode(grePin, OUTPUT);
  pinMode(bluPin, OUTPUT);
  pinMode(touchPin, INPUT);
  Serial.begin(9);
  


}

// the loop function runs over and over again forever
void loop(){
  if (digitalRead(touchPin)==HIGH){

  on +=1;
   if (on > 3){
      (on = 0);
}
   Serial.println(on);
  if (on  == 0){
      digitalWrite(redPin, LOW);
      digitalWrite(grePin, LOW);
      digitalWrite(bluPin, LOW);
  }
  else if(on == 1){
      digitalWrite(redPin, HIGH);
    digitalWrite(grePin, LOW);
      digitalWrite(bluPin, LOW);
  }
  else if (on  == 2){
    digitalWrite(redPin, LOW);
      digitalWrite(grePin, HIGH);
     digitalWrite(bluPin, LOW);
  }
  else if (on  == 3){
      digitalWrite(redPin, LOW);
      digitalWrite(grePin, LOW);
      digitalWrite(bluPin, HIGH);
  }
  }
  delay(300);
  
}  
