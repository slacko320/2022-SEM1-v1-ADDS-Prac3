#include<iostream>
#include "Referee.h"

using namespace std;

int main () {

    Computer Comp1;
    Human Player1;
    Referee Ref1;

    cout << "Player makes move\n" << Player1.makeMove() << endl;
    cout << "Computer makes move\n" << Comp1.makeMove() <<endl;

    return 0;
}