#ifndef CURSOR_H
#define CURSOR_H

typedef unsigned short int position;

struct Position {
    position y;
    position x;
};

class Cursor {

    public:
        void setCursor(position x, position y);
        void moveInXAxis(position by);
        void moveInYAxis(position by);
        Position getPosition();

    private:
        position _y = 0;
        position _x = 0;


};


#endif
