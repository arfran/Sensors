#include "HCSR04.h"

void HCSR04::setTrigger(){
	digitalWrite(this->triggerPin, 0);
	delayMicroseconds(2);
	digitalWrite(this->triggerPin, 1);
	delayMicroseconds(10);
	digitalWrite(this->triggerPin, 0);
	
	
	
}

HCSR04::HCSR04(){
	this->triggerPin = 12;
	this->echoPin = 11;
	
}

float HCSR04::ping(){
	
	long duration = pulseIn(this->echoPin,HIGH,1000);
	return duration*0.0133/2;
	
}
