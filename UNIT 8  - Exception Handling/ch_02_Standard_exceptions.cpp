#include <iostream>
#include <stdexcept>

/*
    In C++, the Standard Library provides several predefined exception classes that are derived from 
    the std::exception class. These standard exception classes help in providing more specific information 
    about the types of exceptions that occur during program execution. 
*/

//  std::runtime_error: Represents errors that can occur during program execution.

    void someFunction1(){
        // Simulating a runtime error
        throw std::runtime_error("A runtime error occurred.");
    }
    int runtime_error(){
        try {
            someFunction1();
        } catch (const std::runtime_error& e) {
            std::cout << "Caught std::runtime_error: " << e.what() << std::endl;
        }
        return 0;
    }

//  std::logic_error: Represents errors that result from logical errors in the program.

    void someFunction2(int value){
        if (value < 0) {
            throw std::logic_error("Value cannot be negative.");
        }
        // Rest of the function code
    }
    int logic_error(){
        try {
            someFunction2(-5);
        } catch (const std::logic_error& e) {
            std::cout << "Caught std::logic_error: " << e.what() << std::endl;
        }
        return 0;
    }

//  std::invalid_argument: Represents errors that occur when an invalid argument is passed to a function.

    void someFunction3(int age){
        if (age < 0 || age > 120) {
            throw std::invalid_argument("Invalid age provided.");
        }
        // Rest of the function code
    }
    int invalid_argument(){
        try {
            someFunction3(150);
        } catch (const std::invalid_argument& e) {
            std::cout << "Caught std::invalid_argument: " << e.what() << std::endl;
        }
        return 0;
    }

//  std::out_of_range: Represents errors that occur when accessing elements out of valid range, like in arrays or containers.

    void someFunction4(const std::string& str){
        if (str.size() < 5) {
            throw std::out_of_range("String length is too short.");
        }
        // Rest of the function code
    }
    int out_of_range(){
        try {
            someFunction4("Hello");
        } catch (const std::out_of_range& e) {
            std::cout << "Caught std::out_of_range: " << e.what() << std::endl;
        }
        return 0;
    }

//  std::bad_alloc: Represents errors that occur when dynamic memory allocation fails.

    void someFunction5(){
        int* ptr = new int[10000000]; // Trying to allocate a large memory block
        delete[] ptr;
    }
    int bad_alloc(){
        try {
            someFunction5();
        } catch (const std::bad_alloc& e) {
            std::cout << "Caught std::bad_alloc: " << e.what() << std::endl;
        }
        return 0;
    }

/*
    Remember that you can always create custom exception classes by deriving from std::exception or any 
    of its subclasses to handle specific exceptions in your application. Using these standard exception 
    classes and creating custom ones when necessary can significantly improve error handling in your C++ 
    programs.
*/