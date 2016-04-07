#include "Arduino.h"
#include "Nokia_5110.h"
#include "Font.h"

Nokia_5110::Nokia_5110(unsigned short RST, unsigned short CE, unsigned short DC, unsigned short DIN, unsigned short CLK){
    _RST = RST;
    _CE = CE;
    _DC = DC;
    _DIN = DIN;
    _CLK = CLK;

    pinMode(RST, OUTPUT);
    pinMode(CE, OUTPUT);
    pinMode(DC, OUTPUT);
    pinMode(DIN, OUTPUT);
    pinMode(CLK, OUTPUT);

    reset();

    extendedInstruction();
    execute(0x14); // LCD bias mode 1:40
}

void Nokia_5110::startTransmission(){
    digitalWrite(_CE, LOW);
}

void Nokia_5110::endTransmission(){
    digitalWrite(_CE, HIGH);
}

void Nokia_5110::transmitInformation(byte information){
    startTransmission();
    shiftOut(_DIN, _CLK, MSBFIRST, information);
    endTransmission();
}

void Nokia_5110::execute(byte command){
    initializeForSendingCommand();
    transmitInformation(command);
}

void Nokia_5110::initializeForSendingCommand(){
    digitalWrite(_DC, LOW);
}

/**
 * @param contrast could be 0 to 127
 */
void Nokia_5110::setContrast(unsigned short value){
    if(value > 127)
        return;

    extendedInstruction();
    
    const unsigned short leastValue = 128;
    execute(byte(leastValue + value));
}

void Nokia_5110::extendedInstruction(){
    execute(0x21);
}

void Nokia_5110::basicInstruction(){
    execute(0x20);
}

/**
 * Temperature Coefficient value could be one of 0, 1, 2 or 3;
 */
void Nokia_5110::setTemperatureCoefficient(unsigned short value){

    if(value > 3)
        return;

    extendedInstruction();

    const unsigned short leastValue = 4;
    execute(byte(leastValue + value));
}

void Nokia_5110::reset(){
    digitalWrite(_RST, LOW);
    digitalWrite(_RST, HIGH);

    clear();
}

void Nokia_5110::turnOnAllSegments(){
    basicInstruction();
    execute(0x09);
}

void Nokia_5110::initializeForSendingData(){
    digitalWrite(_DC, HIGH);
}

void Nokia_5110::print(char text[]){
    setCursor(_cursorPositionX, _cursorPositionY);

    basicInstruction();
    execute(0xC); //display normal mode
    initializeForSendingData();
    
    int i = 0;
    while(text[i]){
        byte fontByte[7];
        unsigned short int byteArrayLength;

        findCorespondingByte(text[i], fontByte, byteArrayLength);
        
        for(short int i = 0; i < byteArrayLength ;i++){
            transmitInformation(fontByte[i]);
        }

        transmitInformation(0x0); // add an empty line after each chars
        moveCursorInXAxis(byteArrayLength + 1);

        i++;
    }

}

void Nokia_5110::println(char text[]){
    print(text);
    moveCursorInYAxis(1);
}

/**
 * Moves cursor in x axis by a number sepcified in method's parameter
 */
void Nokia_5110::moveCursorInXAxis(unsigned int by){
    if(by == 0)
        return;
    
    _cursorPositionX++;

    if(_cursorPositionX > 83){
        moveCursorInYAxis(1);
        _cursorPositionX = 0;
    }

    moveCursorInXAxis(--by);
}

/**
 * Moves cursor in y axis by a number sepcified in method's parameter
 */
void Nokia_5110::moveCursorInYAxis(unsigned int by){
    if(by == 0)
        return;

    _cursorPositionY++;
    _cursorPositionX = 0; // for each y incrementation, reset the x axis :D

    if(_cursorPositionY > 5){
        _cursorPositionY = 0;
    }

    moveCursorInYAxis(--by);
}

void Nokia_5110::setCursor(unsigned int xPosition, unsigned int yPosition){
    _cursorPositionX = xPosition;
    _cursorPositionY = yPosition;

    basicInstruction();

    //set x position
    unsigned short int leastXPositionValue = 128;
    execute(byte(leastXPositionValue + xPosition));


    //set y position
    unsigned short int leastYPositionValue = 64;
    execute(byte(leastYPositionValue + yPosition));
}

void Nokia_5110::clear(){
    initializeForSendingData();

    int i = 504;
    while(i >= 0){
        transmitInformation(0x0);
        i--;
    }

    setCursor(0, 0);
}

void Nokia_5110::clear(unsigned int inRow, unsigned int fromColumn, unsigned int toColumn){
    // toColumn has to be more than from Column, otherwise flip the values :D
    unsigned int temp;
    if(fromColumn > toColumn){
        temp       = fromColumn;
        fromColumn = toColumn;
        toColumn   = temp;
    }

    unsigned int counter = fromColumn;
    while(counter <= toColumn){
        setCursor(counter, inRow);
        initializeForSendingData();
        transmitInformation(0x0);
        counter++;
    }

    setCursor(fromColumn, inRow);
}

