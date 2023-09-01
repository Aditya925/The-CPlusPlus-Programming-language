#include <iostream>
#include <string>

// cout << (insertion operator)
// cin >> (extraction operator)

int user_input(){
    std::string name;
    std::string fullname;
    int age;

    std::cout << "What's your name" << std::endl;
    std::cin >> name;

    std::cout << "Whats your age " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    // For reading string with spaces
    std::cout << "What's your full name" << std::endl;
    std::getline(std::cin >> std::ws, fullname);   
    std::cout << "Your fullname is " << fullname << std::endl;

    return 0;
}