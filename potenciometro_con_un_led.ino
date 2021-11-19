int te = 500;
int ledPin = 10;
int ledPotenc = A0;
float potenc;
float v1;
int light;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPotenc, INPUT);
  Serial.begin(9600);
}

void loop() {
  potenc = analogRead(ledPotenc);
  light = map(potenc,0,1023,0,255);
  Serial.println(light);
  analogWrite(ledPin, light);
  delay(te);
}
