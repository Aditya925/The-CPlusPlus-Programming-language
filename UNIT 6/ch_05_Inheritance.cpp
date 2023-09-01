#include <iostream>

/*
    Inheritance:
        - A class can receive attributes and methods from another class.
        - Child classes inherit from a Parent class.
        - Helps to reuse similar code found within multiple classes.
*/

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating" << std::endl;
        }
};
class Dog : public Animal{
    public:
        void bark(){
            std::cout << "The dog goes woof" << std::endl;
        }
};
class Cat : public Animal{
    public:
        void meow(){
            std::cout << "The cat goes meow" << std::endl;
        }
};

int inheritance(){
    Dog dog;
    Cat cat;

    std::cout << dog.alive << std::endl;
    dog.eat();
    dog.bark();

    std::cout << cat.alive << std::endl;
    cat.meow();

    return 0;
}