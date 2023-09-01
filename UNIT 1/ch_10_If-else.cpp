#include <iostream>

int if_else(){
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age <= 0){
        std::cout << "Enter proper age" << std::endl;
    }
    else if (age>0 && age<=5){
        std::cout << "CHILD" << std::endl;
    }
    else if (age == 6 && age <= 10 ){
        std::cout << "PRIMARY SCHOOL" << std::endl;
    }
    else if (age == 11 && age <= 16 ){
        std::cout << "SECONDARY SCHOOL" << std::endl;
    }
    else if (age == 17 && age <= 18 ){
        std::cout << "HIGH SCHOOL" << std::endl;
    }
    else if (age == 18 && age <= 60 ){
        std::cout << "ADULT" << std::endl;
    }
    else{
        std::cout << "SENIOR CITIZEN" << std::endl;
    }
    return 0;
}