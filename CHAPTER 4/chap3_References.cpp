#include <iostream>

/*
    A reference in C++ is essentially an alias for an existing object. Once a reference is initialized 
    with an object, it acts as a synonym for that object and can be used interchangeably. References 
    are declared using the & symbol following the type of the object they refer to.
*/

int references(){
    // Reference declaration and initialization
    int original = 42;
    int &reference = original;

    std::cout << "Original: " << original << std::endl;
    std::cout << "Reference: " << reference << std::endl;
    std::cout << "Memory address of original: " << &original << std::endl;
    std::cout << "Memory address of reference: " << &reference << std::endl;

    // Modifying value through reference
    reference = 100;
    std::cout << "Modified Original: " << original << std::endl;

    return 0;
}