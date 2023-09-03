#include <iostream>
#include <vector>
#include <stdexcept>

/*
    Generic programming in C++ is a programming paradigm that emphasizes the creation of reusable, 
    flexible, and efficient code that can work with different data types. It enables developers to 
    write algorithms and data structures that are independent of the specific data types they operate 
    on, promoting code reusability and flexibility.

    The primary tool for achieving generic programming in C++ is through the use of templates. 
    Templates allow you to create generic functions and classes that can work with multiple data types. 
    During compilation, the compiler generates the necessary versions of the functions or classes 
    based on the specific data types used with the template.
*/

//  A Generic Stack Class

    template <typename T>
    class Stack {
    public:
        void push(T value) {
            elements.push_back(value);
        }

        T pop() {
            if (!elements.empty()) {
                T value = elements.back();
                elements.pop_back();
                return value;
            }
            throw std::runtime_error("Stack is empty.");
        }

        bool isEmpty() const {
            return elements.empty();
        }

    private:
        std::vector<T> elements;
    };

    int generic_programming() {
        Stack<int> intStack;
        intStack.push(10);
        intStack.push(20);
        intStack.push(30);

        while (!intStack.isEmpty()) {
            std::cout << "Popped element: " << intStack.pop() << std::endl;
        }

        Stack<std::string> stringStack;
        stringStack.push("Hello");
        stringStack.push("World");

        while (!stringStack.isEmpty()) {
            std::cout << "Popped element: " << stringStack.pop() << std::endl;
        }

        return 0;
    }

/*
    In this example, the Stack class is a generic class using templates. It can be instantiated 
    with any data type (e.g., int, double, std::string), making it flexible and reusable for different scenarios.

    Generic programming is a powerful concept that significantly enhances the capabilities of C++ 
    programming. It is extensively used in the C++ Standard Template Library (STL) to provide generic 
    containers and algorithms that can work with various data types.
*/

/*
    Benefits of Generic Programming in C++:

    - Code Reusability: Generic programming reduces the need for duplicating code for different data 
                        types, promoting code reuse and maintenance.

    - Flexibility: Templates allow your code to handle a wide range of data types, making it more adaptable 
                   to various scenarios.

    - Performance: Generic programming can lead to efficient code since the compiler generates specialized 
                   versions of functions for each data type, optimizing the code for specific scenarios.
*/

