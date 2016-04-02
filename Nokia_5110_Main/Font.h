void findCorespondingByte(char character, byte (&result)[5]){
    if(character == 'A'){
          result[0] = 0x7c;
          result[1] = 0x12;
          result[2] = 0x11;
          result[3] = 0x12;
          result[4] = 0x7c;
    }else{
        result[0] = 0x2;
        result[1] = 0x1;
        result[2] = 0x51;
        result[3] = 0x9;
        result[4] = 0x6;
    }
}

