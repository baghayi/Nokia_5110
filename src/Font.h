byte *findCorespondingByte(char character, unsigned short int &byteArrayLength);


byte characters[][7] = {
    {0x7c, 0x12, 0x11, 0x12, 0x7c}, // A  (0)
    {0x7F, 0x49, 0x49, 0x49, 0x36}, // B  (1)
    {0x3e, 0x41, 0x41, 0x41, 0x22}, // C  (2)
    {0x7f, 0x41, 0x41, 0x41, 0x3e}, // D  (3)
    {0x7f, 0x49, 0x49, 0x49, 0x41}, // E  (4)
    {0x7f, 0x9, 0x9, 0x9, 0x1}, // F (5)
    {0x3e, 0x41, 0x49, 0x49, 0x3a}, // G (6)
    {0x7f, 0x8, 0x8, 0x8, 0x7f}, // H (7)
    {0x7f}, // I (8)
    {0x30, 0x40, 0x40, 0x40, 0x3f}, // J (9)
    {0x7f, 0x8, 0x8, 0x14, 0x63}, // K (10)
    {0x7f, 0x40, 0x40, 0x40, 0x40}, // L (11)
    {0x7f, 0x6, 0xc, 0x6, 0x7f}, // M (12)
    {0x7f, 0x4, 0x8, 0x10, 0x7f}, // N (13)
    {0x3e, 0x41, 0x41, 0x41, 0x3e}, // O (14)
    {0x7f, 0x9, 0x9, 0x9, 0x6}, // P (15)
    {0x3e, 0x41, 0x51, 0x61, 0x7e}, // Q (16)
    {0x7f, 0x9, 0x19, 0x29, 0x46}, // R (17)
    {0x26, 0x49, 0x49, 0x49, 0x32}, // S (18)
    {0x1, 0x1, 0x7f, 0x1, 0x1}, // T (19)
    {0x3f, 0x40, 0x40, 0x40, 0x3f}, // U (20)
    {0x1f, 0x20, 0x40, 0x20, 0x1f}, // V (21)
    {0x3f, 0x40, 0x38, 0x40, 0x3f}, // W (22)
    {0x63, 0x14, 0x8, 0x14, 0x63}, // X (23)
    {0x7, 0x8, 0x70, 0x8, 0x7}, // Y (24)
    {0x61, 0x51, 0x49, 0x45, 0x43}, // Z (25)
    {0x8, 0x8, 0x8, 0x8, 0x8}, // - (26)
    {0x5f}, // ! (27)
    {0x2, 0x1, 0x51, 0x9, 0x6}, // ? (28)
    {0x40}, // . (29)
    {0x42, 0x42, 0x7f, 0x40, 0x40}, // 1 (30)
    {0x62, 0x51, 0x49, 0x45, 0x42}, // 2 (31)
    {0x22, 0x41, 0x49, 0x49, 0x3e}, // 3 (32)
    {0x1f, 0x10, 0x7c, 0x10, 0x10}, // 4 (33)
    {0x4f, 0x49, 0x49, 0x49, 0x31}, // 5 (34)
    {0x3e, 0x49, 0x49, 0x49, 0x32}, // 6 (35)
    {0x1, 0x1, 0x79, 0x5, 0x3}, // 7 (36)
    {0x36, 0x49, 0x49, 0x49, 0x36}, // 8 (37)
    {0x26, 0x49, 0x49, 0x49, 0x3e}, // 9 (38)
    {0x3e, 0x41, 0x41, 0x41, 0x3e}, // 0 (39)
    {0x8, 0x8, 0x3e, 0x8, 0x8}, // + (40)
    {0x36, 0x36}, // : (41)
    {0x14, 0x14, 0x14, 0x14, 0x14}, // = (42)
    {0x0, 0x0}, // [space :D] (43)
    {0x20, 0x54, 0x54, 0x54, 0x78}, // a (44)
    {0x7f, 0x50, 0x50, 0x50, 0x20}, // b  (45)
    {0x38, 0x44, 0x44, 0x44, 0x28}, // c (46)
    {0x20, 0x50, 0x50, 0x50, 0x7f}, // d (47)
    {0x38, 0x54, 0x54, 0x54, 0x48}, // e (48)
    {0x8, 0x7e, 0x9, 0x1, 0x2}, // f (49)
    {0x48, 0x54, 0x54, 0x54, 0x38}, // g (50)
    {0x7f, 0x8, 0x8, 0x8, 0x70}, // h (51)
    {0x44, 0x7d, 0x40}, // i (52)
    {0x20, 0x40, 0x44, 0x3d}, // j (53)
    {0x7f, 0x10, 0x10, 0x28, 0x44}, // k (54)
    {0x41, 0x7f, 0x40}, // l (55)
    {0x7c, 0x4, 0x7c, 0x4, 0x78}, // m (56)
    {0x7c, 0x4, 0x4, 0x4, 0x78}, // n (57)
    {0x38, 0x44, 0x44, 0x44, 0x38}, // o (58)
    {0x7c, 0x14, 0x14, 0x14, 0x8}, // p (59)
    {0x8, 0x14, 0x14, 0x14, 0x7c}, // q (60)
    {0x7c, 0x8, 0x4, 0x4, 0x4}, // r (61)
    {0x48, 0x54, 0x54, 0x54, 0x24}, // s (62)
    {0x2, 0x3f, 0x42, 0x40}, // t (63)
    {0x3c, 0x40, 0x40, 0x20, 0x7c}, // u (64)
    {0x1c, 0x20, 0x40, 0x20, 0x1c}, // v (64)
    {0x7c, 0x20, 0x70, 0x20, 0x7c}, // w (66)
    {0x44, 0x28, 0x10, 0x28, 0x44}, // x (67)
    {0x4c, 0x50, 0x50, 0x50, 0x3c}, // y (68)
    {0x44, 0x64, 0x54, 0x4c, 0x44}, // z (69)
    {0x7f, 0x41, 0x41}, // [ (70)
    {0x41, 0x41, 0x7f}, // ] (71)
    {0x8, 0x8, 0x36, 0x41, 0x41}, // { (72)
    {0x41, 0x41, 0x36, 0x8, 0x8}, // } (73)
    {0x1c, 0x22, 0x41}, // ( (74)
    {0x41, 0x22, 0x1c}, // ) (75)
    {0x3e, 0x41, 0x5d, 0x55, 0x1e}, // @ (76)
    {0x14, 0x3e, 0x14, 0x3e, 0x14}, // # (77)
    {0x2c, 0x2a, 0x7f, 0x2a, 0x12}, // $ (78)
    {0x26, 0x16, 0x8, 0x34, 0x32}, // % (79)
    {0x4, 0x2, 0x1, 0x2, 0x4}, // ^ (80)
    {0x40, 0x40, 0x40, 0x40, 0x40}, // _ (81)
    {0x7}, // ' (82)
    {0x7, 0x0, 0x7}, // " (83)
    {0x40, 0x76, 0x36}, // ; (84)
    {0x20, 0x10, 0x8, 0x4, 0x2}, // / (85)
    {0x2, 0x4, 0x8, 0x10, 0x20}, /* \ (86) */
    {0x10, 0x28, 0x44}, // < (87)
    {0x44, 0x28, 0x10}, // > (88)
    {0x12, 0xc, 0x3f, 0xc, 0x12}, // * (89)
    {0x1, 0x2}, // ` (90)
    {0x2, 0x1, 0x1, 0x3, 0x2, 0x2, 0x1}, // ~ (91)
    {0x30, 0x4a, 0x45, 0x2a, 0x10, 0x28}, // & (92)
};


byte *findCorespondingByte(char character, unsigned short int &byteArrayLength){
    byteArrayLength = 5;

    if(character == 'A'){
        return characters[0];
    }else if (character == 'B'){
        return characters[1];
    }else if (character == 'C'){
        return characters[2];
    }else if (character == 'D'){
        return characters[3];
    }else if (character == 'E'){
        return characters[4];
    }else if (character == 'F'){
        return characters[5];
    }else if (character == 'G'){
        return characters[6];
    }else if (character == 'H'){
        return characters[7];
    }else if (character == 'I'){
        byteArrayLength = 1;
        return characters[8];
    }else if (character == 'J'){
        return characters[9];
    }else if (character == 'K'){
        return characters[10];
    }else if (character == 'L'){
        return characters[11];
    }else if (character == 'M'){
        return characters[12];
    }else if (character == 'N'){
        return characters[13];
    }else if (character == 'O'){
        return characters[14];
    }else if (character == 'P'){
        return characters[15];
    }else if (character == 'Q'){
        return characters[16];
    }else if (character == 'R'){
        return characters[17];
    }else if (character == 'S'){
        return characters[18];
    }else if (character == 'T'){
        return characters[19];
    }else if (character == 'U'){
        return characters[20];
    }else if (character == 'V'){
        return characters[21];
    }else if (character == 'W'){
        return characters[22];
    }else if (character == 'X'){
        return characters[23];
    }else if (character == 'Y'){
        return characters[24];
    }else if (character == 'Z'){
        return characters[25];
    }else if (character == '-'){ // dash
        return characters[26];
    }else if (character == '!'){
        byteArrayLength = 1;
        return characters[27];
    }else if (character == '?'){
        return characters[28];
    }else if (character == '.'){
        byteArrayLength = 1;
        return characters[29];
    }else if (character == '1'){
        return characters[30];
    }else if (character == '2'){
        return characters[31];
    }else if (character == '3'){
        return characters[32];
    }else if (character == '4'){
        return characters[33];
    }else if (character == '5'){
        return characters[34];
    }else if (character == '6'){
        return characters[35];
    }else if (character == '7'){
        return characters[36];
    }else if (character == '8'){
        return characters[37];
    }else if (character == '9'){
        return characters[38];
    }else if (character == '0'){ // zero
        return characters[39];
    }else if (character == '+'){
        return characters[40];
    }else if (character == ':'){
        byteArrayLength = 2;
        return characters[41];
    }else if (character == '='){
        return characters[42];
    }else if (character == ' '){ // space
        byteArrayLength = 2;
        return characters[43];
    }else if (character == 'a'){
        return characters[44];
    }else if (character == 'b'){
        return characters[45];
    }else if (character == 'c'){
        return characters[46];
    }else if (character == 'd'){
        return characters[47];
    }else if (character == 'e'){
        return characters[48];
    }else if (character == 'f'){
        return characters[49];
    }else if (character == 'g'){
        return characters[50];
    }else if (character == 'h'){
        return characters[51];
    }else if (character == 'i'){
        byteArrayLength = 3;
        return characters[52];
    }else if (character == 'j'){
        byteArrayLength = 4;
        return characters[53];
    }else if (character == 'k'){
        return characters[54];
    }else if (character == 'l'){
        byteArrayLength = 3;
        return characters[55];
    }else if (character == 'm'){
        return characters[56];
    }else if (character == 'n'){
        return characters[57];
    }else if (character == 'o'){ // lower case o
        return characters[58];
    }else if (character == 'p'){
        return characters[59];
    }else if (character == 'q'){
        return characters[60];
    }else if (character == 'r'){
        return characters[61];
    }else if (character == 's'){
        return characters[62];
    }else if (character == 't'){
        byteArrayLength = 4;
        return characters[63];
    }else if (character == 'u'){
        return characters[64];
    }else if (character == 'v'){
        return characters[65];
    }else if (character == 'w'){
        return characters[66];
    }else if (character == 'x'){
        return characters[67];
    }else if (character == 'y'){
        return characters[68];
    }else if (character == 'z'){
        return characters[69];
    }else if (character == '['){
        byteArrayLength = 3;
        return characters[70];
    }else if (character == ']'){
        byteArrayLength = 3;
        return characters[71];
    }else if (character == '{'){
        return characters[72];
    }else if (character == '}'){
        return characters[73];
    }else if (character == '('){
        byteArrayLength = 3;
        return characters[74];
    }else if (character == ')'){
        byteArrayLength = 3;
        return characters[75];
    }else if (character == '@'){
        return characters[76];
    }else if (character == '#'){
        return characters[77];
    }else if (character == '$'){
        return characters[78];
    }else if (character == '%'){
        return characters[79];
    }else if (character == '^'){
        return characters[80];
    }else if (character == '_'){
        return characters[81];
    }else if (character == '\''){
        byteArrayLength = 1;
        return characters[82];
    }else if (character == '"'){
        byteArrayLength = 3;
        return characters[83];
    }else if (character == ';'){
        byteArrayLength = 3;
        return characters[84];
    }else if (character == '/'){
        return characters[85];
    }else if (character == '\\'){
        return characters[86];
    }else if (character == '<'){
        byteArrayLength = 3;
        return characters[87];
    }else if (character == '>'){
        byteArrayLength = 3;
        return characters[88];
    }else if (character == '*'){
        return characters[89];
    }else if (character == '`'){
        byteArrayLength = 2;
        return characters[90];
    }else if (character == '~'){
        byteArrayLength = 7;
        return characters[91];
    }else if (character == '&'){
        byteArrayLength = 6;
        return characters[92];
    }
    else{ // default is question mark
        return characters[28];
    }
}

