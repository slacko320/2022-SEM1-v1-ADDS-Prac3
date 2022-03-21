#include <iostream>
#include "Referee.h"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main () {
/*
    Computer Comp1;
    Human Player1;
    Referee Ref1;
    RandomComputer randomComp1;
*/

//    cout << Ref1.refGame(Player1, Comp1) << endl;
    /*for(int i=0; i<10; i++) {
        cout << randomComp1.makeMove() << endl;
    }*/
    //Avalanche aval;
    //cout << aval.makeMove() << endl;

    FistfullODollars fist;
    Player * Com1 = &fist;
    
    Toolbox toolB;
    Player * Com2 = &toolB;

    Human P1;
    Player * Hum1 = &P1;

    Referee ref1;
    cout << ref1.refGame(Hum1, Com2) << endl;
    cout << ref1.refGame(Hum1, Com2) << endl;
    cout << ref1.refGame(Hum1, Com2) << endl;
    /*
    cout << Com1->makeMove() << endl;
    cout << fist.makeMove() << endl;
    cout << Com1->makeMove() << endl;
    cout << Com1->makeMove() << endl;
    cout << Com1->makeMove() << endl;
    cout << Com1->makeMove() << endl;
    */
return 0;
}