float v2;
int analogread = A0;
int verde = 11;
int amarillo = 10;
int rojo = 3;
float readVal;
int dt = 300;

void setup () {
Serial.begin(9600);
pinMode(analogread,INPUT);
pinMode(verde,OUTPUT);
pinMode(amarillo,OUTPUT);
pinMode(rojo,OUTPUT);
}
void loop() {
 readVal = analogRead(analogread);
 v2 = (5.*readVal)/1023.;
 if (v2>=0.00 && v2<=3.00) {
  digitalWrite(verde,HIGH);
  digitalWrite(amarillo,LOW);
  digitalWrite(rojo,LOW);
 }
 if (v2>3.00 && v2<=4.00) {
  digitalWrite(amarillo,HIGH);
  digitalWrite(verde,LOW);
  digitalWrite(rojo,LOW);
 }
 if (v2>4.00 && v2<=5.00){
  digitalWrite(rojo,HIGH);
  digitalWrite(amarillo,LOW);
  digitalWrite(verde,LOW);
 }
 Serial.println(v2);
 delay(dt);
}
