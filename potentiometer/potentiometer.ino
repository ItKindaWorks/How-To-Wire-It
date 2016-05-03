//define out potentiometer pin
int potPin = A0;

//define our led pin
int ledPin = 10;

void setup(){
  //setup the pins and inputs and outputs
	pinMode(potPin, INPUT);
	pinMode(ledPin, OUTPUT);

  //start the serial line
  Serial.begin(9600);
}

void loop(){
  
	int potVal = analogRead(potPin);  //take a reading from the potentometer

	Serial.println(potVal); //print out the value
	analogWrite(ledPin, potVal / 4);//set the light to between 0-255 based on the potval

	delay(20);
}
