#include "Nokia_5110.h"
Nokia_5110 lcd = Nokia_5110(2, 3, 4, 5, 6);

void setup() {
    lcd.setContrast(50);
    lcd.setTemperatureCoefficient(0);
    
    lcd.turnOnAllSegments();
}

void loop() {
}
