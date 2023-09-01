#include <iostream>
#include <string>

int useful_string_methods(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12){
        std::cout << "Your name can't be over 15 characters" << std::endl;
    }
    else if (name.empty()){
        std::cout << "You didn't enter your name";
    }
    else{
        std::cout << "Welcome " << name;
    }

    name.append("@gmail.com");
    std::cout << "Your email id is: " << name;

    return 0;
}