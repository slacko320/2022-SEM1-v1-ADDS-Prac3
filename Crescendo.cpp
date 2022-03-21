// Crescendo.cpp
// Crescendo moves in the following order: Paper, Scissors, Rock.

#include "Crescendo.h"

char Crescendo::makeMove()
{   
    if(moveOrder == 1) {
        moveOrder ++;
        return 'P';
    } else if (moveOrder == 2) {
        moveOrder ++;
        return 'S';
    } else {
        moveOrder = 1;
        return 'R';
    }
}

void Crescendo::resetMoveOrder() 
{
    moveOrder = 1;
}
