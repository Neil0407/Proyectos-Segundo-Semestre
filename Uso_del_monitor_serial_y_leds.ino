int ledOrange = 2;
int ledRed = 3;
int ledGreen = 4;
int dt = 1000;
String msg1 = "¿Qué LED quieres prender?";
String msg2 = "El LED ";
String msg3 = " se prendió";
String color;
void setup() {
  Serial.begin(9600);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  //Preg
  Serial.println(msg1);
  while (Serial.available() == 0 ); {}
  color = Serial.readS tring();
  if (color == "Naranja" || color == "Anaranjado") {
    digitalWrite(ledOrange, HIGH);
    delay (dt);
    digitalWrite(ledOrange, LOW);
    delay (dt);
  }
  if (color == "Rojo" || color == "rojo") {
    digitalWrite(ledRed, HIGH);
    delay (dt);
    digitalWrite(ledRed, LOW);
    delay (dt);
  }
  if (color == "Verde" || color == "verde") {
    digitalWrite(ledGreen, HIGH);
    delay (dt);
    digitalWrite(ledGreen, LOW);
    delay (dt);
  }
  Serial.print (msg2);
  Serial.print (color);
  Serial.println (msg3);
  Serial.println();
}
