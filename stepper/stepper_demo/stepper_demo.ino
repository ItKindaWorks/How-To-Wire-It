//ItKindaWorks - Creative Commons 2016
//github.com/ItKindaWorks
//
//Simple sctepper motor control demo

const int stepPin = 12; 	//pin to pulse for steps
const int dirPin = 11;		//pin to change step direction

void setup(){

	//set pins as outputs
	pinMode(stepPin, OUTPUT);
	pinMode(dirPin, OUTPUT);
}



void loop(){

	//step forward 100 steps
	stepperFWD();
	for(int i = 0; i < 100; i++){
		motorStep();
		delay(1);
	}

	//step backwards 100 steps
	stepperREV();
	for(int i = 0; i < 100; i++){
		motorStep();
		delay(1);
	}

}

//change the stepper direction to forward
void stepperFWD(){
	digitalWrite(dirPin, HIGH);
}

//change the stepper direction to reverse
void stepperREV(){
	digitalWrite(dirPin, LOW);

}

//have the stepper motor take one step
void motorStep(){
	digitalWrite(stepPin, HIGH);
	delay(1);
	digitalWrite(stepPin, LOW);
}






