float v2;
int readVal;
int analogPin = A0;
int dt = 300;
int ledPin = 3;
void setup() {
  Serial.begin(9600);
  pinMode(analogPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  readVal =  analogRead(analogPin);
  v2 = (5.*readVal)/1023;
  if (v2>4.00){
    digitalWrite(ledPin,HIGH);
  }
  if (v2<=4){
    digitalWrite(ledPin,LOW);
  }
  Serial.println(v2);
  delay(dt);
  
}
