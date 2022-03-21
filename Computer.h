// This is Computer.h file

#ifndef COMPUTER_H_
#define COMPUTER_H_

    // Below is Computer Class
class Computer
{
    public:
    // A constructor for Computer Class
    Computer();

    // A method for Computer Class
    char makeMove();
};

// Derived class
class Avalanche : public Computer {
};

// Derived class
class RandomComputer {
   public:
    RandomComputer();
    char makeMove();
};



#endif /* COMPUTER_H_ */
