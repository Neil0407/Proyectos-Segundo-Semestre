float vout;
float vread;
int time1 = 500;
float analogVal;
void setup() {
// vread es el pin de 5 voltios que emite arduino
pinMode(vread,INPUT);
Serial.begin(9600);
}

void loop() {
  /* para hallar los voltios se usa una regla de 3 simple se da que
  5 voltios es lo máximo que da mi sálida de arduino y 1023 es lo máximo 
  que capta el pin analógico*/
analogVal  = analogRead(vread);
vout = (5*analogVal)/1023;
Serial.print("El voltaje es de: ");
Serial.print(vout);
Serial.println(" Voltios");
delay(time1);
}
