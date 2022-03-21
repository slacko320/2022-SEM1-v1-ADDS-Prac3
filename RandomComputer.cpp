// RandomComputer.cpp
// RandomComputer returns a random move.
#include "RandomComputer.h"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

RandomComputer::RandomComputer()
{
    // Seed Random Value when constructed
    srand (time(NULL));
}

char RandomComputer::makeMove()
{
    char move;
    int secretN = 0; 
        // Assign random nubmer to secretN in between 1~99
        // If the number is 1~33, it will be 'R' => Rock
        // If the number is 34~66, it will be 'R' => Rock
        // If the number is 67~99, it will be 'R' => Rock
        secretN = rand() % 99 + 1;
        if(secretN > 0 && secretN < 34) {
            move = 'R';
        } else if(secretN > 33 && secretN < 67) {
            move = 'P';
        } else {
            move = 'S';
        }
    return move;
}