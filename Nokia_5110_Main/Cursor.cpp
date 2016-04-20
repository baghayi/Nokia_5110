#include "Cursor.h"

void Cursor::setCursor(unsigned int positionX, unsigned int positionY){
    _positionX = positionX;
    _positionY = positionY;
}

/**
 * Moves cursor in x axis by a number sepcified in method's parameter
 */
void Cursor::moveInXAxis(unsigned int by){
    if(by == 0)
        return;
    
    _positionX++;

    if(_positionX > 83){
        moveInYAxis(1);
        _positionX = 0;
    }

    moveInXAxis(--by);
}

/**
 * Moves cursor in y axis by a number sepcified in method's parameter
 */
void Cursor::moveInYAxis(unsigned int by){
    if(by == 0)
        return;

    _positionY++;
    _positionX = 0; // for each y incrementation, reset the x axis :D

    if(_positionY > 5){
        _positionY = 0;
    }

    moveInYAxis(--by);
}

/**
 * Returns cursor's current position.
 */
Position Cursor::getPosition(){
    Position currentPosition;
    currentPosition.y = _positionY;
    currentPosition.x = _positionX;

    return currentPosition;
}
