int i=0;
int time1=500;
void setup() {
  //begin significa inicializar (serial=monitor serial)
Serial.begin(9600);
}

void loop() {
  // print significa imprimir (todo en una sola linea)
  // println lo imprimirá en diferentes lineas; si encerramos entre comillas se imprimirá el valor de adentro
Serial.print("  ");
Serial.println(i);
delay(time1);
i=i+1;
}
