#include <iostream>

// Same as typedef

using text_u = std::string;
using number_u = int;

int Using(){

    // We can use text_u instead of std::string
    text_u firstname = "Sameer";
    text_u lastname = "Kulkarni";

    // We can use number_u instead of int
    number_u age = 20;
    number_u weight = 70;

    std::cout << firstname << " " << lastname << std::endl;
    std::cout << "Age is " << age << std::endl;
    std::cout << "Weight is " << weight << std::endl;

}