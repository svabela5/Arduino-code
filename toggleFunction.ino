/*
This function makes the toggeling of a pin simpler as you do not have to guess weather the pin is turned on or off it will just 
toggle the pins status.
*/
void toggle(int pin){
  boolean stat = digitalRead(pin);
  if(stat){
    digitalWrite(pin,LOW);
  } else {
    digitalWrite(pin,HIGH);
  }
  Serial.println("toggle");
}
