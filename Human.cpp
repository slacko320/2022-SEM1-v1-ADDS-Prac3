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
    cout << "Enter move: ";
    cin >> move;
    return move;
}
