// This is a Human.cpp file

#include <iostream>
#include "Human.h"
using namespace std;

// Human class constructor
Human::Human()
{
}

// Public method for Human class
// makeMove()
char Human::makeMove()
{
    char move;
    while(move != 'R' && move != 'P' && move != 'S') {
        cout << "Enter move (Type one of the three: R, P or S): ";
        cin >> move;
    }
    return move;
}
