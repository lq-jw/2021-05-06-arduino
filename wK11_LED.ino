const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  Serial.print("THe button State = ");
  Serial.println(buttonState);
  delay(1);
  if(buttonState == HIGH ){
    digitalWrite(ledPin,LOW);
    
  }
  else {
    digitalWrite(ledPin,HIGH);
    
  }
}
