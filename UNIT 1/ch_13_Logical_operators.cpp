#include <iostream>

// && = check if both the conditions are true.
// || = check if at least one of the two conditions is true
// ! = reverses the logical state of its operand

int logical_operators(){
    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30){
        std::cout << "The temperature is good" << std::endl; 
    }
    else if (temp > 30){
        std::cout << "Temperature is bad" ;
    }
    else if (temp == 0 || temp == -273){
        std::cout  << "Abosolute zero";
    }
    else{
        std::cout << "Enter proper integer value";
    }
    return 0;
}