// biblioteca  arduino para display
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);     // Pinos display
const int potenciometro = 0;             // pino de entrada do potenciômetro
int valor = 0;
float saida = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("IFPB - SE_2021.1");         // mensagem display
}

void loop() {
  lcd.setCursor(0, 1);
  valor = analogRead(potenciometro);     // recebendo valor
  saida = valor * 0.00489;               // convertendo pra volts
  lcd.print(saida, 2);                   // mostrando valor no display com duas casas decimais
  delay(10);                             // tempo para nova leitura
}
