#include <iostream>

// ternary operator ?: = replacement to an if/else statement
// condition ? expression1(true) : expression2(false);

int ternary_operator(){
    int grade = 75;
    grade >= 60 ? std::cout << "You pass!" << std::endl : std::cout << "You fail" << std::endl;

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    hungry ? std::cout << " You are hungry" : std::cout << " You are full";

    bool male = true;
    std::cout << (male ? " You are a man" : " You are a woman"); 

    return 0;
}