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
    }
    else{ // default is question mark
        result[0] = 0x2;
        result[1] = 0x1;
        result[2] = 0x51;
        result[3] = 0x9;
        result[4] = 0x6;
    }
}

