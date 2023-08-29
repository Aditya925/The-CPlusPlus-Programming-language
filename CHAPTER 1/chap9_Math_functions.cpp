#include <iostream>
#include <cmath>

int math_functions(){
    double x = 100;
    double y = 400;

    double z1 = std::max(x,y);
    double z2 = std::min(x,y);
    std::cout << "Max is: "<< z1 << '\n' << "Min is: " << z2 << std::endl;

    // pow() function
    int z3 = pow(10,3);
    std::cout << "10 raise to power 3 is " << z3 << std::endl;

    // sqrt() function
    double z4 = sqrt(45);
    std::cout << "Square root is: " << z4 << std::endl;

    // abs() function
    int z5 = abs(-23.4);
    std::cout << "Absolute is: " << z5 << std::endl;

    //round() function
    int z6 = round(-3.14);
    std::cout << "Round value is: " << z6 << std::endl;

    return 0;
}