#include <iostream>

/*
    Memory address = a location in memory where data is stored
                     It can be accessed with '&'
*/

int memory_address(){
    std::string name = "Aditya";
    int age = 23;
    bool student = true;

    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;

    return 0;
}