#include <iostream>

/*
    Pointers are a fundamental concept in the C++ programming language. They allow you to work with
    memory addresses and manage data more efficiently. Pointers are used to store the memory address 
    of another variable, allowing you to indirectly access and manipulate the value of that variable. 
    Here's a basic overview of pointers in C++:
*/

int pointers(){
    int var = 8;
    std::cout << "Initial value of variable 'var' is " << var << std::endl;

    // &var is a memory address
    int *ptr = &var;  

    // Output same as &var.
    std::cout << "ptr output is address: " << ptr << std::endl;       

    // Value of variable 8 will be printed             
    std::cout << "*ptr output is variable 'var' value: " << *ptr << std::endl;     

    // Manipulating pointer
    *ptr = 45;
    std::cout << "Value of variable 'var' after manipulating pointer is " << var << std::endl;

    // Accessing and Assigning value of variable using dereference operator '*'
    int y = *ptr;
    std::cout << "New Value of variable 'var' assigned to y i.e: " << y << std::endl;
}