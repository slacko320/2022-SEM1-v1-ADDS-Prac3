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

// Derived class, RandomComputer makes random moves.
class RandomComputer : public Computer 
{
   public:
    RandomComputer();
    virtual char makeMove();
};

// Derived class, Avalanche always chooses Rock
class Avalanche : public Computer 
{
};

// Derived class, Bureaucrat always chooses Paper
class Bureaucrat 
{
    public:
    virtual char makeMove();
};
// Derived class, Toolbox always chooses Scissors
class Toolbox 
{
    public:
    virtual char makeMove();
};

#endif /* COMPUTER_H_ */
