#ifndef CURSOR_H
#define CURSOR_H

struct Position {
    unsigned short int y;
    unsigned short int x;
};

class Cursor {

    public:
        void setCursor(unsigned int positionX, unsigned int positionY);
        void moveInXAxis(unsigned int by);
        void moveInYAxis(unsigned int by);
        Position getPosition();

    private:
        unsigned short int _positionY = 0;
        unsigned short int _positionX = 0;


};


#endif
