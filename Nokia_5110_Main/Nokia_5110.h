#ifndef NOKIA_5110_H
#define NOKIA_5110_H

#include "Arduino.h"

class Nokia_5110 {

    public:
        Nokia_5110(unsigned short RST, unsigned short CE, unsigned short DC, unsigned short DIN, unsigned short CLK);
        void setContrast(unsigned short value);
        void setTemperatureCoefficient(unsigned short value);
        void turnOnAllSegments();
        void print(char text[]);
        void println(char text[]);
        void clear();
        void setCursor(unsigned int xPosition, unsigned int yPosition);
        
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

        unsigned short _RST;
        unsigned short _CE;
        unsigned short _DC;
        unsigned short _DIN;
        unsigned short _CLK;

        unsigned short int _cursorPositionY = 0;
        unsigned short int _cursorPositionX = 0;
        void moveCursorInXAxis(unsigned int by);
        void moveCursorInYAxis(unsigned int by);

};

#endif
