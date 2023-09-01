#include <iostream>

/*
    Structs:
        - It's a structure that groups related variables under one name.
        - Structs can contain many different datatypes (std::string, int, double, bool etc).
        - Variables in structs are known as 'members'.
        - Members can be accessed using " . " 
*/

struct student{
    std::string name;
    double cgpa;
    bool enrolled;
};

int struct_example(){
    student Student1;
    Student1.name = "Aditya";
    Student1.cgpa = 7.29;
    Student1.enrolled = true;

    student Student2;
    Student2.name = "Sam";
    Student2.cgpa = 8.25;
    Student2.enrolled = true;

    student Student3;
    Student3.name = "Sid";
    Student3.cgpa = 9.45;
    Student3.enrolled = false;

    std::cout << Student1.name << std::endl;
    std::cout << Student1.cgpa << std::endl;
    std::cout << Student1.enrolled << std::endl;

    std::cout << Student2.name << std::endl;
    std::cout << Student2.cgpa << std::endl;
    std::cout << Student2.enrolled << std::endl;

    std::cout << Student3.name << std::endl;
    std::cout << Student3.cgpa << std::endl;
    std::cout << Student3.enrolled << std::endl;

    return 0;
}