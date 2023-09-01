#include <iostream>

/*
    Recursion:
         - A programming technique where a function invokes itself from within.
         - Breaks a complex concept into a repeatable single step
    Advantages:
         - Less code and it's cleaner
         - Useful for sorting and searching algorithm
    Disadvantages:
         - Uses more memory
         - Slower
*/

void walk(int steps);

int recursion(){
    walk(100);

    return 0;
}
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step" << std::endl;
        walk(steps - 1);
    }
}

// Factorial recursion

int func(int num);

int factorial(){
    std::cout << func(10) << std::endl;

    return 0;
}
int func(int num){
    if(num > 1){
        return num*func(num - 1);
    }
    else{
        return 1;
    }
}