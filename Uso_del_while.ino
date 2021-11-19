int ledPin = 10;
float analog1 = A0;
int potVal;
int valorVolt;
int dt = 400;
void setup() {
  Serial.begin(9600);
  pinMode(analog1, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(analog1);
  valorVolt = map(potVal,0,1023,0,5);
  Serial.println(valorVolt);
  while (valorVolt<5) {

    Serial.print(valorVolt);
    Serial.print(" Voltios");
    Serial.println();
    digitalWrite(ledPin, HIGH);
    delay (dt);
    digitalWrite(ledPin, LOW);
    delay(dt);
    potVal = analogRead(analog1);
    valorVolt = map(potVal,0,1023,0,5);
  }

}
