//Variable for keeping the previous LED state 
int previousLEDstate = LOW;
unsigned long lastTime = 0; 
int interval = 400;

void setup(){
	// Declare the pin for the LED as Output
	pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){
	unsigned long currentTime = millis();
	if(currentTime - lastTime >= interval){
		lastTime = currentTime; 
		if(previousLEDstate == HIGH){
			digitalWrite(LED_BUILTIN, LOW);
			previousLEDstate = LOW;
		}
		else{
			digitalWrite(LED_BUILTIN,HIGH);
			previousLEDstate = HIGH;
		}
	}
}
