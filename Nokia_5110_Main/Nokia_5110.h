#ifndef NOKIA_5110_H
#define NOKIA_5110_H

#include "Arduino.h"

typedef byte display_mode;

class Nokia_5110 {

    public:
        Nokia_5110(unsigned short RST, unsigned short CE, unsigned short DC, unsigned short DIN, unsigned short CLK);
        void setContrast(unsigned short value);
        void setTemperatureCoefficient(unsigned short value);
        void print(char text[]);
        void println(char text[]);
        void clear();
        void clear(unsigned int inRow, unsigned int fromColumn, unsigned int toColumn);
        void setCursor(unsigned int xPosition, unsigned int yPosition);
        
        class Display_Mode {
            public:
                static const display_mode BLANK = 0x8;
                static const display_mode NORMAL = 0xc;
                static const display_mode ALL_SEGMENTS_ON = 0x9;
                static const display_mode INVERSE_VIDEO = 0xd;
        };
        void setDisplayMode(display_mode mode);
        
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

        unsigned short int _cursorPositionY = 0;
        unsigned short int _cursorPositionX = 0;
        void moveCursorInXAxis(unsigned int by);
        void moveCursorInYAxis(unsigned int by);

};

#endif
