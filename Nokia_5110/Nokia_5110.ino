#define RST 2
#define CE 3
#define DC 4
#define DIN 5
#define CLK 6

void startTransmission(){
    digitalWrite(CE, LOW);
}

void endTransmission(){
    digitalWrite(CE, HIGH);
}

void transmitInformation(byte information){
    startTransmission();
    shiftOut(DIN, CLK, MSBFIRST, information);
    endTransmission();
}

void execute(byte command){
    digitalWrite(DC, LOW); // Data/Command (DC) pin is low for commands and high for data for displaying

    transmitInformation(command);
}

/**
 * @param contrast could be 0 to 127
 */
void setContrast(unsigned short value){
    if(value < 0 || value > 127)
        return;

    extendedInstruction();
    
    short leastValue = 128;
    execute(byte(leastValue + value));
}

void extendedInstruction(){
    execute(0x21);
}

void basicInstruction(){
    execute(0x20);
}

/**
 * Temperature Coefficient value could be one of 0, 1, 2 or 3;
 */
void setTemperatureCoefficient(unsigned short value){

    if(value < 0 || value > 3)
        return;

    extendedInstruction();
    
    switch(value){
        case 0:
            execute(0x04);
            break;
        
        case 1:
            execute(0x05);
            break;
        
        case 2:
            execute(0x06);
            break;
        
        case 3:
            execute(0x07);
            break;
    }
}

void setup() {
    pinMode(RST, OUTPUT);
    pinMode(CE, OUTPUT);
    pinMode(DC, OUTPUT);
    pinMode(DIN, OUTPUT);
    pinMode(CLK, OUTPUT);

    digitalWrite(RST, LOW);
    digitalWrite(RST, HIGH);

    
    setContrast(50);
    setTemperatureCoefficient(0);
    
    extendedInstruction();
    execute(0x14); // LCD bias mode 1:40
    
    basicInstruction();
    execute(0x09); // LCD all segments on
}

void loop() {
}
