int myNumber;
String msg1 = "Ingrese un número: ";
String msg2 = "Tu número es: ";
void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print(msg1);
  while (Serial.available() == 0) {}
  myNumber = Serial.parseInt();
  Serial.print (msg2);
  Serial.println (myNumber);

}
