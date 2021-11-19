#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>
#define type DHT11
DHT dht (8, type);
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int t = 5000;
float humedad;
float temperatura;
void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(12, INPUT);
  dht.begin();
}
void loop() {
  humedad = dht.readHumidity();
  temperatura = dht.readTemperature();
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" *C ");
  Serial.println();
  lcd.setCursor(0, 0);
  lcd.print("Humedad: ");
  lcd.setCursor(9, 0);
  lcd.print(humedad);
  lcd.setCursor(13, 0);
  lcd.print(" %");
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.setCursor(7,1);
  lcd.print(temperatura);
  lcd.print(" *C");
  delay(t);
  lcd.clear();
}
