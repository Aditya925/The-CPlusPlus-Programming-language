#include <iostream>

/*
    Class:
        A class is a blueprint or a template for creating objects. It defines the structure and behavior 
        of objects of that class. In C++, a class consists of data members (variables) and member 
        functions(methods). Data members store the attributes or properties of the objects, and member 
        functions define the operations or behaviors that objects of the class can perform.

    Objects:
        An object is an instance of a class. It is a concrete, real-world representation of the class 
        blueprint. You can create multiple objects from a single class, each with its own set of data members 
        and the ability to call member functions.
*/

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;
    
    void eat(){
        std::cout << "This person is Eating" << std::endl;
    }
    void drink(){
        std::cout << "This person is Drinking" << std::endl;
    }
    void sleep(){
        std::cout << "This person is Sleeping" << std::endl;
    }
};
int oop_example(){

    Human human1;
    Human human2;

    human1.name = "Rick Sanchez";
    human1.occupation = "Mad Scientist";
    human1.age = 70;

    human2.name = "Morty Smith";
    human2.occupation = "Student";
    human2.age = 14;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;
    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << human2.name << std::endl;
    std::cout << human2.occupation << std::endl;
    std::cout << human2.age << std::endl;
    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}

// Another Example 
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string colour;

    void accelerate(){
        std::cout << "You step on the gas." << std::endl;
    }
    void brake(){
        std::cout << "You stepped on brake." << std::endl;
    }
};
int oop_example2(){
    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.colour = "Red";

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.colour << std::endl;
    car1.accelerate();
    car1.brake();

    return 0;
}
