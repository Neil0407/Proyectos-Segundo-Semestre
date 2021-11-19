int pin = 10;
int parpadeos;
String ms1 = "Escriba los parpadeos del LED";
String ms2 = "El LED parpadeo ";
String ms3 = " veces. ";
int dt = 500;
int i = 0;
void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);

}

void loop() {
  Serial.println (ms1);
  while (Serial.available() == 0 ) {
  }
  parpadeos = Serial.parseInt();
  for (i = 0 ; i <= parpadeos ; i++) {
    digitalWrite(pin, 1);
    delay(dt);
    digitalWrite(pin, 0);
    delay(dt);
  }
  Serial.print(ms2);
  Serial.print(parpadeos);
  Serial.println (ms3);
}
