int LED = 2; //This value may change. 

void setup(){
	pintMode(LED,OUTPUT);
}
void loop(){
	digitalWrite(LED,HIGH);
	delay(200);
	digitalWrite(LED,LOW);
	delay(200);
}
