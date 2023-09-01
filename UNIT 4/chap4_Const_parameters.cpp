#include <iostream>

/*
    const parameter:
        1. It is a parameter that is effectively read-only.
        2. Code is more secure and conveys intent.
        3. Useful for references and pointers.
*/

void printInfo(const std::string name, const int age);

int const_parameters(){
    std::string name = "Aditya";
    int age = 23;

    printInfo(name, age);

    return 0;
}
void printInfo(const std::string name, const int age){
    /*
        name = " ";
        age = 0;
        This code can make changes in original parameters. We can pass const parameters
        for more security. 
    */
    std::cout << "Name is " << name << std::endl;
    std::cout << "Age is " << age << std::endl;
}