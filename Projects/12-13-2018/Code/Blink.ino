
void setup(){
	pinMode(LED_BUILTIN,OUTPUT); //Configure the pin
}
void loop(){
  digitalWrite(LED_BUILTIN,HIGH); //Turn on 
  delay(400); //Wait
  digitalWrite(LED_BUILTIN,LOW); //Turn off
  delay(400); //Wait In milliseconds 
}
