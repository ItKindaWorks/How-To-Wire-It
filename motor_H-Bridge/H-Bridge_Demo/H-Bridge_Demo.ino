const int speedPin = 10; 	//connect to EN pin
const int fwdPin = 9;		//connect to logic pin 1
const int revPin = 8;		//connect to logic pin 2

int motorMinSpeed = 150;	//set for your motors minimum speed
int motorMaxSpeed = 255;	//set for your motors maximum speed


void setup(){
	//set all the pins as outputs
	pinMode(speedPin, OUTPUT);
	pinMode(fwdPin, OUTPUT);
	pinMode(revPin, OUTPUT);
}



void loop(){

	motorFWD();	//set the motor to spin forward

	//spin the motor up to full speed
	for(int i = motorMinSpeed; i < motorMaxSpeed; i++){
		motorSetSpeed(i);
		delay(10);
	}

	//spin the motor down to off
	for(int i = motorMaxSpeed; i > motorMinSpeed; i--){
		motorSetSpeed(i);
		delay(10);
	}


	motorREV();	//set the motor to spin in reverse

	//spin the motor up to full speed
	for(int i = motorMinSpeed; i < motorMaxSpeed; i++){
		motorSetSpeed(i);
		delay(10);
	}

	//spin the motor down to off
	for(int i = motorMaxSpeed; i > motorMinSpeed; i--){
		motorSetSpeed(i);
		delay(10);
	}

}

//set the motor to go forward
void motorFWD(){
	digitalWrite(fwdPin, HIGH);
	digitalWrite(revPin, LOW);
}

//set the motor to go in reverse
void motorREV(){
	digitalWrite(fwdPin, LOW);
	digitalWrite(revPin, HIGH);
}

//stop the motor
void motorStop(){
	analogWrite(speedPin, 0);
}

//set the motor speed
void motorSetSpeed(int speed){
	analogWrite(speedPin, speed);
}