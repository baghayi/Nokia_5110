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

void lcdCommand(byte command){
    digitalWrite(DC, LOW); // Data/Command (DC) pin is low for commands and high for data for displaying

    transmitInformation(command);
}

/**
 * @param contrast could be 1 to 17
 */
void setContrast(short contrast){
    byte list[17] = {0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF};

    if(contrast < 1 || contrast > 17)
        return;

    lcdCommand(list[contrast - 1]);
}

void setup() {
    pinMode(RST, OUTPUT);
    pinMode(CE, OUTPUT);
    pinMode(DC, OUTPUT);
    pinMode(DIN, OUTPUT);
    pinMode(CLK, OUTPUT);

    digitalWrite(RST, LOW);
    digitalWrite(RST, HIGH);

    lcdCommand(0x21); // LCD extended commands
    setContrast(6);
    lcdCommand(0x04); // set temp coefficent
    lcdCommand(0x14); // LCD bias mode 1:40
    lcdCommand(0x20); // LCD basic commands
    lcdCommand(0x09); // LCD all segments on
}

void loop() {
}
