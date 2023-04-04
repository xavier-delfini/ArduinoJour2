// Utilisation de la librairie LiquidCrytal.h

#include <LiquidCrystal.h>


// Définition des broches RS, E, et Data (DB4 à DB7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  


void setup() {
  lcd.begin(16, 1);
  lcd.setCursor(6, 0);
  lcd.print(" :)");
  Serial.begin(9600);
}


void loop() {
}
