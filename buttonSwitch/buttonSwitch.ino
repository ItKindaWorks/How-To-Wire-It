int redPin = 11;
int greenPin = 10;

int buttonPin = 13;
int switchPin = 14;

void setup(){
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);

	pinMode(buttonPin, INPUT);
	pinMode(switchPin, INPUT);
}

void loop(){
	if(digitalRead(buttonPin)){
		digitalWrite(redPin, HIGH);
	}
	else{
		digitalWrite(redPin, LOW);
	}

	if(digitalRead(switchPin)){
		digitalWrite(greenPin, HIGH);
	}
	else{
		digitalWrite(greenPin, LOW);
	}
}
