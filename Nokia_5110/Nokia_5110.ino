#define RST 2
#define CE 3
#define DC 4
#define DIN 5
#define CLK 6

void lcdCommand(byte command){
    digitalWrite(DC, LOW); // DC pin is low for commands
    digitalWrite(CE, LOW);
    shiftOut(DIN, CLK, MSBFIRST, command); // transmit serial data
    digitalWrite(CE, HIGH);
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
    lcdCommand(0xB8); // set LCD Vop (contrast)
    lcdCommand(0x04); // set temp coefficent
    lcdCommand(0x14); // LCD bias mode 1:40
    lcdCommand(0x20); // LCD basic commands
    lcdCommand(0x09); // LCD all segments on
}

void loop() {
}
