void findCorespondingByte(char character, byte (&result)[5]){
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
        result[0] = 0x0;
        result[1] = 0x0;
        result[2] = 0x7f;
        result[3] = 0x0;
        result[4] = 0x0;
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
    }
    else{ // default is question mark
        result[0] = 0x2;
        result[1] = 0x1;
        result[2] = 0x51;
        result[3] = 0x9;
        result[4] = 0x6;
    }
}

