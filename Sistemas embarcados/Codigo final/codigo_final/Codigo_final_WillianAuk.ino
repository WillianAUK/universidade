
// biblioteca  arduino para display
#include <LiquidCrystal.h>


LiquidCrystal lcd(7, 6, 5, 4, 3, 2);  // Pinos display
const int potenciometro = 0;          // pino de entrada do potenciômetro
int valor = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("IFPB - SE_2021.1");      // mensagem display
}

void loop() {
  lcd.setCursor(0, 1);
  valor = analogRead(potenciometro);  // recebendo valor
  lcd.print(valor);                   // mostrando valor no display
  delay(10);                          // tempo para nova leitura
}
