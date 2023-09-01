#include <iostream>

double square(double length);

int square_area(){
    double length = 25.0;
    double area = square(length);
    std::cout << area << std::endl;

    return 0;
}

double square(double length){
    return length*length;
}