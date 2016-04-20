#ifndef NOKIA_5110_H
#define NOKIA_5110_H

#include "Arduino.h"
#include "Display_Mode.h"

typedef byte mux_rate;

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
        void setDisplayMode(display_mode mode);

        class Mux_Rate {
            public:
                static const mux_rate HUNDRED = 0x10;
                static const mux_rate EIGHTY = 0x11;
                static const mux_rate SIXTY_FIVE = 0x12;
                static const mux_rate FORTY_EIGHT = 0x13;
                static const mux_rate FORTY = 0x14;
                static const mux_rate TWENTY_FOUR = 0x15;
                static const mux_rate EIGHTEEN = 0x16;
                static const mux_rate TEN = 0x17;
        };
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

        unsigned short int _cursorPositionY = 0;
        unsigned short int _cursorPositionX = 0;
        void moveCursorInXAxis(unsigned int by);
        void moveCursorInYAxis(unsigned int by);

};

#endif
