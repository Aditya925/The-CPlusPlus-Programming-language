#include <iostream>

int mynum = 3;
void printnum();

int variablescope(){
    int mynum = 2;
    printnum();
    std::cout << mynum << std::endl;

    // For using global variable
    std::cout << ::mynum << " - printed using scope resolution operator '::' "<< std::endl;
}

void printnum(){
    int mynum = 1;
    std::cout << mynum << std::endl;
}