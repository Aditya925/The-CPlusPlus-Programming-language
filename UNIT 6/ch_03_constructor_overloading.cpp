#include <iostream>
#include <string>

/*
    constructor overloading:
        - Multiple constructors with same name but different parameters.
        - Allows for varying arguments when instantiating an object.
*/

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    
    Pizza(std::string topping1){
        this -> topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this -> topping1 = topping1;
        this -> topping2 = topping2;
    }
    Pizza(){
        std::cout << "Pizza with no toppings" << std::endl;
    }
};
int constructor_overloading(){
    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << std::endl;
    std::cout << pizza2.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl;
    std::cout << pizza3.topping1 << std::endl;

    return 0;
}