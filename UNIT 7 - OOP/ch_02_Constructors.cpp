#include <iostream>

/*
    constructor: 
        - Special method that is automatically called when an object is instantiated.
        - Useful for assigning values to attributes as arguments.
*/

class Student{
    public:
        std::string name;
        int age;
        double cgpa;
    
    // Constructor
    Student(std::string x, int y, double z){
        this -> name = x;
        this -> age = y;
        this -> cgpa = z;
    }
};
int constructor_example1(){
    Student Student1("Aditya", 23, 7.29);
    Student Student2("siddharth", 21, 6.69);

    std::cout << Student1.name << std::endl;
    std::cout << Student1.age << std::endl;
    std::cout << Student1.cgpa << std::endl;

    std::cout << Student2.name << std::endl;
    std::cout << Student2.age << std::endl;
    std::cout << Student2.cgpa << std::endl;

    return 0;
}

// Another example
class Cars{
    public:
        std::string make;
        std::string model;
        int year;
        std::string colour;
    
    Cars(std::string make, std::string model, int year, std::string colour){
        this -> make = make;
        this -> model = model;
        this -> year = year;
        this -> colour = colour;
    }
};
int constructor_example2(){
    Cars car1("Chevy", "Corvette", 2022, "blue");
    Cars car2("Ford", "Mustang", 2023, "red");

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.colour << std::endl;

    std::cout << car2.make << std::endl;
    std::cout << car2.model << std::endl;
    std::cout << car2.year << std::endl;
    std::cout << car2.colour << std::endl;

    return 0;
}
