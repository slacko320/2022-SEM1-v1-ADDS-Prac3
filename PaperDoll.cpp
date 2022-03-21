// PaperDoll.cpp
// PaperDoll moves in the following order: Paper, Scissors, Scissors.
#include "Computer.h"

char PaperDoll::makeMove()
{
    if(moveOrder == 1) {
        moveOrder ++;
        return 'P';
    } else if (moveOrder == 2) {
        moveOrder ++;
        return 'S';
    } else {
        moveOrder = 1;
        return 'S';
    }
}

void PaperDoll::resetMoveOrder() 
{
    moveOrder = 1;
}