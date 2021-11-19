#define Rojo 6
#define Amarillo 7
#define t 1000
int ciclo1 = 3;
int ciclo2 = 5;
int i;
void setup() {
  pinMode(Rojo, OUTPUT);
  pinMode(Amarillo, OUTPUT);
}

void loop() {
  for (i = 0 ; i<=ciclo1 ; i=i+1) {
    digitalWrite(Amarillo, HIGH);
    delay(t);
    digitalWrite(Amarillo, LOW);
    delay(t);
  }
  for (i = 0 ; i<=ciclo2 ; i=i+1) {
    digitalWrite(Rojo, HIGH);
    delay(t);
    digitalWrite(Rojo, LOW);
    delay(t);
  }
}
