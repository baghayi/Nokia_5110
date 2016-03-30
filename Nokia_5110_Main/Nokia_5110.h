#ifndef NOKIA_5110_H
#define NOKIA_5110_H

#include "Arduino.h"

class Nokia_5110 {

    public:
        Nokia_5110(unsigned short RST, unsigned short CE, unsigned short DC, unsigned short DIN, unsigned short CLK);
        void setContrast(unsigned short value);
        void setTemperatureCoefficient(unsigned short value);
        
    private:
        void startTransmission();
        void endTransmission();
        void transmitInformation(byte information);
        void execute(byte command);
        void extendedInstruction();
        void basicInstruction();
        void reset();

        unsigned short _RST;
        unsigned short _CE;
        unsigned short _DC;
        unsigned short _DIN;
        unsigned short _CLK;

};

#endif
