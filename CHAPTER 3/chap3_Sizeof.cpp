#include <iostream>

// sizeof() = determines size in bytes of a variable,data type,class etc

int size_of(){
    double gpa = 2.5;
    std::string name;
    char grade = 'A';
    char grades[] = {'A','B','C','D','E'};
    std::string students[] = {"Aditya","Sameer","Amit","Kaustubh","Avinash"};

    std::cout << sizeof(gpa) << " bytes" << std::endl;
    std::cout << sizeof(name) << " bytes" << std::endl;
    std::cout << sizeof(grade) << " bytes" << std::endl;
    std::cout << sizeof(grades) << " bytes" << std::endl;
    std::cout << sizeof(students) << " bytes" << std::endl;

    std::cout << "no of elements in grades is " << sizeof(grades)/sizeof(char) << std::endl;
    std::cout << "no of elements in students is " << sizeof(students)/sizeof(std::string) << std::endl;

    return 0; 
}