void findCorespondingByte(char character, byte (&result)[5], unsigned short int &byteArrayLength){
    byteArrayLength = 5;

    if(character == 'A'){
        result[0] = 0x7c;
        result[1] = 0x12;
        result[2] = 0x11;
        result[3] = 0x12;
        result[4] = 0x7c;
    }else if (character == 'B'){
        result[0] = 0x7F;
        result[1] = 0x49;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x36;
    }else if (character == 'C'){
        result[0] = 0x3e;
        result[1] = 0x41;
        result[2] = 0x41;
        result[3] = 0x41;
        result[4] = 0x22;
    }else if (character == 'D'){
        result[0] = 0x7f;
        result[1] = 0x41;
        result[2] = 0x41;
        result[3] = 0x41;
        result[4] = 0x3e;
    }else if (character == 'E'){
        result[0] = 0x7f;
        result[1] = 0x49;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x41;
    }else if (character == 'F'){
        result[0] = 0x7f;
        result[1] = 0x9;
        result[2] = 0x9;
        result[3] = 0x9;
        result[4] = 0x1;
    }else if (character == 'G'){
        result[0] = 0x3e;
        result[1] = 0x41;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x3a;
    }else if (character == 'H'){
        result[0] = 0x7f;
        result[1] = 0x8;
        result[2] = 0x8;
        result[3] = 0x8;
        result[4] = 0x7f;
    }else if (character == 'I'){
        result[0] = 0x7f;
        byteArrayLength = 1;
    }else if (character == 'J'){
        result[0] = 0x30;
        result[1] = 0x40;
        result[2] = 0x40;
        result[3] = 0x40;
        result[4] = 0x3f;
    }else if (character == 'K'){
        result[0] = 0x7f;
        result[1] = 0x8;
        result[2] = 0x8;
        result[3] = 0x14;
        result[4] = 0x63;
    }else if (character == 'L'){
        result[0] = 0x7f;
        result[1] = 0x40;
        result[2] = 0x40;
        result[3] = 0x40;
        result[4] = 0x40;
    }else if (character == 'M'){
        result[0] = 0x7f;
        result[1] = 0x6;
        result[2] = 0xc;
        result[3] = 0x6;
        result[4] = 0x7f;
    }else if (character == 'N'){
        result[0] = 0x7f;
        result[1] = 0x4;
        result[2] = 0x8;
        result[3] = 0x10;
        result[4] = 0x7f;
    }else if (character == 'O'){
        result[0] = 0x3e;
        result[1] = 0x41;
        result[2] = 0x41;
        result[3] = 0x41;
        result[4] = 0x3e;
    }else if (character == 'P'){
        result[0] = 0x7f;
        result[1] = 0x9;
        result[2] = 0x9;
        result[3] = 0x9;
        result[4] = 0x6;
    }else if (character == 'Q'){
        result[0] = 0x3e;
        result[1] = 0x41;
        result[2] = 0x51;
        result[3] = 0x61;
        result[4] = 0x7e;
    }else if (character == 'R'){
        result[0] = 0x7f;
        result[1] = 0x9;
        result[2] = 0x19;
        result[3] = 0x29;
        result[4] = 0x46;
    }else if (character == 'S'){
        result[0] = 0x26;
        result[1] = 0x49;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x32;
    }else if (character == 'T'){
        result[0] = 0x1;
        result[1] = 0x1;
        result[2] = 0x7f;
        result[3] = 0x1;
        result[4] = 0x1;
    }else if (character == 'U'){
        result[0] = 0x3f;
        result[1] = 0x40;
        result[2] = 0x40;
        result[3] = 0x40;
        result[4] = 0x3f;
    }else if (character == 'V'){
        result[0] = 0x1f;
        result[1] = 0x20;
        result[2] = 0x40;
        result[3] = 0x20;
        result[4] = 0x1f;
    }else if (character == 'W'){
        result[0] = 0x3f;
        result[1] = 0x40;
        result[2] = 0x38;
        result[3] = 0x40;
        result[4] = 0x3f;
    }else if (character == 'X'){
        result[0] = 0x63;
        result[1] = 0x14;
        result[2] = 0x8;
        result[3] = 0x14;
        result[4] = 0x63;
    }else if (character == 'Y'){
        result[0] = 0x7;
        result[1] = 0x8;
        result[2] = 0x70;
        result[3] = 0x8;
        result[4] = 0x7;
    }else if (character == 'Z'){
        result[0] = 0x61;
        result[1] = 0x51;
        result[2] = 0x49;
        result[3] = 0x45;
        result[4] = 0x43;
    }else if (character == '-'){ // dash
        result[0] = 0x8;
        result[1] = 0x8;
        result[2] = 0x8;
        result[3] = 0x8;
        result[4] = 0x8;
    }else if (character == '!'){
        result[0] = 0x5f;
        byteArrayLength = 1;
    }else if (character == '?'){
        result[0] = 0x2;
        result[1] = 0x1;
        result[2] = 0x51;
        result[3] = 0x9;
        result[4] = 0x6;
    }else if (character == '.'){
        result[0] = 0x40;
        byteArrayLength = 1;
    }else if (character == '1'){
        result[0] = 0x42;
        result[1] = 0x42;
        result[2] = 0x7f;
        result[3] = 0x40;
        result[4] = 0x40;
    }else if (character == '2'){
        result[0] = 0x62;
        result[1] = 0x51;
        result[2] = 0x49;
        result[3] = 0x45;
        result[4] = 0x42;
    }else if (character == '3'){
        result[0] = 0x22;
        result[1] = 0x41;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x3e;
    }else if (character == '4'){
        result[0] = 0x1f;
        result[1] = 0x10;
        result[2] = 0x7c;
        result[3] = 0x10;
        result[4] = 0x10;
    }else if (character == '5'){
        result[0] = 0x4f;
        result[1] = 0x49;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x31;
    }else if (character == '6'){
        result[0] = 0x3e;
        result[1] = 0x49;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x32;
    }else if (character == '7'){
        result[0] = 0x1;
        result[1] = 0x1;
        result[2] = 0x79;
        result[3] = 0x5;
        result[4] = 0x3;
    }else if (character == '8'){
        result[0] = 0x36;
        result[1] = 0x49;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x36;
    }else if (character == '9'){
        result[0] = 0x26;
        result[1] = 0x49;
        result[2] = 0x49;
        result[3] = 0x49;
        result[4] = 0x3e;
    }else if (character == '0'){ // zero
        result[0] = 0x3e;
        result[1] = 0x41;
        result[2] = 0x41;
        result[3] = 0x41;
        result[4] = 0x3e;
    }else if (character == '+'){
        result[0] = 0x8;
        result[1] = 0x8;
        result[2] = 0x3e;
        result[3] = 0x8;
        result[4] = 0x8;
    }else if (character == ':'){
        result[0] = 0x14;
        byteArrayLength = 1;
    }else if (character == '='){
        result[0] = 0x14;
        result[1] = 0x14;
        result[2] = 0x14;
        result[3] = 0x14;
        result[4] = 0x14;
    }else if (character == ' '){ // space
        result[0] = 0x0;
        result[1] = 0x0;
        byteArrayLength = 2;
    }else if (character == 'a'){
        result[0] = 0x20;
        result[1] = 0x54;
        result[2] = 0x54;
        result[3] = 0x54;
        result[4] = 0x78;
    }else if (character == 'b'){
        result[0] = 0x7f;
        result[1] = 0x50;
        result[2] = 0x50;
        result[3] = 0x50;
        result[4] = 0x20;
    }else if (character == 'c'){
        result[0] = 0x38;
        result[1] = 0x44;
        result[2] = 0x44;
        result[3] = 0x44;
        result[4] = 0x28;
    }else if (character == 'd'){
        result[0] = 0x20;
        result[1] = 0x50;
        result[2] = 0x50;
        result[3] = 0x50;
        result[4] = 0x7f;
    }else if (character == 'e'){
        result[0] = 0x38;
        result[1] = 0x54;
        result[2] = 0x54;
        result[3] = 0x54;
        result[4] = 0x48;
    }else if (character == 'f'){
        result[0] = 0x8;
        result[1] = 0x7e;
        result[2] = 0x9;
        result[3] = 0x1;
        result[4] = 0x2;
    }else if (character == 'g'){
        result[0] = 0x48;
        result[1] = 0x54;
        result[2] = 0x54;
        result[3] = 0x54;
        result[4] = 0x38;
    }else if (character == 'h'){
        result[0] = 0x7f;
        result[1] = 0x8;
        result[2] = 0x8;
        result[3] = 0x8;
        result[4] = 0x70;
    }else if (character == 'i'){
        result[0] = 0x44;
        result[1] = 0x7d;
        result[2] = 0x40;
        byteArrayLength = 3;
    }else if (character == 'j'){
        result[0] = 0x20;
        result[1] = 0x40;
        result[2] = 0x44;
        result[3] = 0x3d;
        byteArrayLength = 4;
    }else if (character == 'k'){
        result[0] = 0x7f;
        result[1] = 0x10;
        result[2] = 0x10;
        result[3] = 0x28;
        result[4] = 0x44;
    }else if (character == 'l'){
        result[0] = 0x41;
        result[1] = 0x7f;
        result[2] = 0x40;
        byteArrayLength = 3;
    }else if (character == 'm'){
        result[0] = 0x7c;
        result[1] = 0x4;
        result[2] = 0x7c;
        result[3] = 0x4;
        result[4] = 0x78;
    }else if (character == 'n'){
        result[0] = 0x7c;
        result[1] = 0x4;
        result[2] = 0x4;
        result[3] = 0x4;
        result[4] = 0x78;
    }else if (character == 'o'){ // lower case o
        result[0] = 0x38;
        result[1] = 0x44;
        result[2] = 0x44;
        result[3] = 0x44;
        result[4] = 0x38;
    }else if (character == 'p'){
        result[0] = 0x7c;
        result[1] = 0x14;
        result[2] = 0x14;
        result[3] = 0x14;
        result[4] = 0x8;
    }else if (character == 'q'){
        result[0] = 0x8;
        result[1] = 0x14;
        result[2] = 0x14;
        result[3] = 0x14;
        result[4] = 0x7c;
    }else if (character == 'r'){
        result[0] = 0x7c;
        result[1] = 0x8;
        result[2] = 0x4;
        result[3] = 0x4;
        result[4] = 0x4;
    }else if (character == 's'){
        result[0] = 0x48;
        result[1] = 0x54;
        result[2] = 0x54;
        result[3] = 0x54;
        result[4] = 0x24;
    }else if (character == 't'){
        result[0] = 0x2;
        result[1] = 0x3f;
        result[2] = 0x42;
        result[3] = 0x40;
        byteArrayLength = 4;
    }else if (character == 'u'){
        result[0] = 0x3c;
        result[1] = 0x40;
        result[2] = 0x40;
        result[3] = 0x20;
        result[4] = 0x7c;
    }else if (character == 'v'){
        result[0] = 0x1c;
        result[1] = 0x20;
        result[2] = 0x40;
        result[3] = 0x20;
        result[4] = 0x1c;
    }else if (character == 'w'){
        result[0] = 0x7c;
        result[1] = 0x20;
        result[2] = 0x70;
        result[3] = 0x20;
        result[4] = 0x7c;
    }else if (character == 'x'){
        result[0] = 0x44;
        result[1] = 0x28;
        result[2] = 0x10;
        result[3] = 0x28;
        result[4] = 0x44;
    }else if (character == 'y'){
        result[0] = 0x4c;
        result[1] = 0x50;
        result[2] = 0x50;
        result[3] = 0x50;
        result[4] = 0x3c;
    }else if (character == 'z'){
        result[0] = 0x44;
        result[1] = 0x64;
        result[2] = 0x54;
        result[3] = 0x4c;
        result[4] = 0x44;
    }else if (character == '['){
        result[0] = 0x7f;
        result[1] = 0x41;
        result[2] = 0x41;
        byteArrayLength = 3;
    }else if (character == ']'){
        result[0] = 0x41;
        result[1] = 0x41;
        result[2] = 0x7f;
        byteArrayLength = 3;
    }else if (character == '{'){
        result[0] = 0x8;
        result[1] = 0x8;
        result[2] = 0x36;
        result[3] = 0x41;
        result[4] = 0x41;
    }else if (character == '}'){
        result[0] = 0x41;
        result[1] = 0x41;
        result[2] = 0x36;
        result[3] = 0x8;
        result[4] = 0x8;
    }else if (character == '('){
        result[0] = 0x1c;
        result[1] = 0x22;
        result[2] = 0x41;
        byteArrayLength = 3;
    }else if (character == ')'){
        result[0] = 0x41;
        result[1] = 0x22;
        result[2] = 0x1c;
        byteArrayLength = 3;
    }else if (character == '@'){
        result[0] = 0x3e;
        result[1] = 0x41;
        result[2] = 0x5d;
        result[3] = 0x55;
        result[4] = 0x1e;
    }else if (character == '#'){
        result[0] = 0x14;
        result[1] = 0x3e;
        result[2] = 0x14;
        result[3] = 0x3e;
        result[4] = 0x14;
    }else if (character == '$'){
        result[0] = 0x2c;
        result[1] = 0x2a;
        result[2] = 0x7f;
        result[3] = 0x2a;
        result[4] = 0x12;
    }else if (character == '%'){
        result[0] = 0x26;
        result[1] = 0x16;
        result[2] = 0x8;
        result[3] = 0x34;
        result[4] = 0x32;
    }
    else{ // default is question mark
        result[0] = 0x2;
        result[1] = 0x1;
        result[2] = 0x51;
        result[3] = 0x9;
        result[4] = 0x6;
    }
}

