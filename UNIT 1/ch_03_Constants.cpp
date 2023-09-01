#include <iostream>

/*
    When you do not want others (or yourself) to change existing variable values, use the const 
    keyword (this will declare the variable as "constant", which means unchangeable and read-only):
*/

int constants(){
    const double PI = 3.14159;
    const int SPEED_OF_LIGHT = 299792458;
    const double plancks_constant = 6.62607015e-34;

    std::cout << PI << std::endl;
    std::cout << SPEED_OF_LIGHT << std::endl;
    std::cout << plancks_constant << std::endl;

    return 0;
}
