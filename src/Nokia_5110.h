#ifndef NOKIA_5110_H
#define NOKIA_5110_H

#include "Arduino.h"
#include "Display_Mode.h"
#include "Mux_Rate.h"
#include "Cursor.h"

class Nokia_5110 {

    public:
        Nokia_5110();
        Nokia_5110(unsigned short RST, unsigned short CE, unsigned short DC, unsigned short DIN, unsigned short CLK);
        void setContrast(unsigned short value);
        void setTemperatureCoefficient(unsigned short value);
        void print(char text[]);
        void println(char text[]);
        void clear();
        void clear(position inRow, position fromColumn, position toColumn);
        void setCursor(position x, position y);
        void setDisplayMode(display_mode mode);
        void setBiasSystem(mux_rate rate);
        
    private:
        void startTransmission();
        void endTransmission();
        void transmitInformation(byte information);
        void execute(byte command);
        void extendedInstruction();
        void basicInstruction();
        void reset();
        void initializeForSendingCommand();
        void initializeForSendingData();
        void makeEnoughSpaceForPrinting(unsigned short int newCharacterLength);

        unsigned short _RST;
        unsigned short _CE;
        unsigned short _DC;
        unsigned short _DIN;
        unsigned short _CLK;

        Cursor _cursor;
};

#endif
