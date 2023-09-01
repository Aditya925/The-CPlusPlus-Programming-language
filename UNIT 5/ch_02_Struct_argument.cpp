#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string colour;
};

void print_car(Car &car);                    // Always remember to add a function declaration

int struct_as_argument(){
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.colour = "red";

    car2.model = "Corvette";
    car2.year = 2025;
    car2.colour = "blue";

    print_car(car1);
    print_car(car2);

    return 0;
}
void print_car(Car &car){                     // Use pass by reference to work directly with orignal struct
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.colour << std::endl;
}