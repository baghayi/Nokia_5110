#include "Nokia_5110.h"


void setup() {
    Nokia_5110 lcd = Nokia_5110(2, 3, 4, 5, 6);
    lcd.setContrast(60);
    lcd.setTemperatureCoefficient(0);
    
//    lcd.turnOnAllSegments();
    lcd.clear();
    /*
     *lcd.println("Hossein");
     *lcd.println("Mamaly Reza");
     *lcd.println("Kazem");
     *lcd.println("Adele");
     *lcd.println("Sidigha");
     */
    lcd.setCursor(28, 2);
    lcd.println("Salam");
}

void loop() {
}
