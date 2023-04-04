// Utilisation de la librairie LiquidCrytal.h

#include <LiquidCrystal.h>


// Définition des broches RS, E, et Data (DB4 à DB7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  


void setup() {
  lcd.begin(16, 2);
  //lcd.setCursor(6, 0);
  lcd.print(" tension recu :");
  Serial.begin(9600);
}


void loop() {
    lcd.setCursor(0, 1);
    int entry = analogRead(11);
    float voltage = entry * (5.0 / 1024.0);
    Serial.println(voltage);
    lcd.print(voltage);
}
