// FistfullODollars.cpp
// FistfullODollars moves in the following order: Rock, Paper,Paper
#include "FistfullODollars.h"

char FistfullODollars::makeMove()
{
    if(moveOrder == 1) {
        moveOrder ++;
        return 'R';
    } else if (moveOrder == 2) {
        moveOrder ++;
        return 'P';
    } else {
        moveOrder = 1;
        return 'P';
    }
}

void FistfullODollars::resetMoveOrder() 
{
    moveOrder = 1;
}
