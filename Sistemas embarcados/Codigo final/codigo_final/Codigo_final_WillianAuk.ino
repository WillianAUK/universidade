#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int potenciometro = 0; // pino de entrada do potenciômetro
int valor = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("IFPB - SE 2021.1");
}

void loop() {
  lcd.setCursor(0, 1);
  valor = analogRead(potenciometro);
  lcd.print(valor);
  delay(100);
}
