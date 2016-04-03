#include "Nokia_5110.h"


void setup() {
    Nokia_5110 lcd = Nokia_5110(2, 3, 4, 5, 6);
    lcd.setContrast(60);
    lcd.setTemperatureCoefficient(0);
    
//    lcd.turnOnAllSegments();
    lcd.clear();
    lcd.print("Hossein               ");
    lcd.print("Mamaly Reza       ");
    lcd.print("Kazem                  ");
    lcd.print("Adele                   ");
    lcd.print("Sidigha");
}

void loop() {
}
