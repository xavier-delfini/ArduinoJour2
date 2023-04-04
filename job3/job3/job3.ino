// Utilisation de la librairie LiquidCrytal.h

#include <LiquidCrystal.h>


// Définition des broches RS, E, et Data (DB4 à DB7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  
bool counting=1;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(7, INPUT);
  lcd.print("Delfini"); 
}

void loop() {
  if (digitalRead(7)==0){
    if (counting==1){
      counting=0;
    }
    else{
      counting=1;
    }
  }
  while (counting==1){
    lcd.setCursor(0, 1);
    lcd.print(millis() / 1000);  
  }
}
