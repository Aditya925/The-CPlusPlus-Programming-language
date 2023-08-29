#include <iostream>

/*
    'typedef' keyword in C++ is used for aliasing existing data types, user-defined data types, and pointers 
    to a more meaningful name. Typedefs allow you to give descriptive names to standard data types, which 
    can also help you self-document your code. Mostly typedefs are used for aliasing, only if the predefined 
    name is too long or complex to write again and again.  The unnecessary use of typedef is generally not 
    a good practice.
    typedef is replaced with using.
*/

typedef std::string text_t;
typedef int number_t;

int Typedefs(){

    // We can use text_t instead of std::string now.
    text_t firstname = "Aditya";
    text_t lastname = "Rahalkar";

    // We can use number_t instead of int now.
    number_t age = 23;
    number_t weight = 75;

    std::cout << firstname << " " << lastname << std::endl;
    std::cout << "Age is " << age << std::endl;
    std::cout << "Weight is " << weight << std::endl;
}