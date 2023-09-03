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
int inheritance_example1(){
    Dog dog;
    Cat cat;

    std::cout << dog.alive << std::endl;
    dog.eat();
    dog.bark();

    std::cout << cat.alive << std::endl;
    cat.meow();

    return 0;
}

class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double s){
        this -> side = s;
        this -> area = s*s*6;
        this -> volume = s*s*s;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double r){
        this -> radius = r;
        this -> area = 4*3.14*r;
        this -> volume = (4/3.0)*3.14*r*r*r;
    }
};
int inheritance_example2(){
    Cube cube(10);
    Sphere sphere(10);

    std::cout << "Area of cube = " << cube.area << std::endl;
    std::cout << "Volume of cube = " << cube.volume << std::endl;

    std::cout << "Area of Sphere = " << sphere.area << std::endl;
    std::cout << "Volume of Sphere = " << sphere.volume << std::endl;
    
    return 0;
}