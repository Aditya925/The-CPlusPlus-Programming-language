#include <iostream>

/*
    Templates in C++ allow you to write generic code that works with multiple data types. 
    A template is a blueprint for a family of functions or classes. The actual functions or 
    classes are generated at compile time based on the specific data types provided when the template is used.
*/

/*  Example to explain templates in C++ using a generic function that finds the maximum value of two values of 
    any data type.Generic function using templates to find the maximum of two values of any type.
*/

    template <typename T>
    T getMax(T a, T b) {
        return (a > b) ? a : b;
    }

    int templates_cpp() {
        int num1 = 10, num2 = 20;
        double doubleNum1 = 3.14, doubleNum2 = 1.23;
        char char1 = 'A', char2 = 'Z';

        // Using the generic getMax function with int data type
        int maxInt = getMax(num1, num2);
        std::cout << "Maximum of " << num1 << " and " << num2 << " is: " << maxInt << std::endl;

        // Using the generic getMax function with double data type
        double maxDouble = getMax(doubleNum1, doubleNum2);
        std::cout << "Maximum of " << doubleNum1 << " and " << doubleNum2 << " is: " << maxDouble << std::endl;

        // Using the generic getMax function with char data type
        char maxChar = getMax(char1, char2);
        std::cout << "Maximum of " << char1 << " and " << char2 << " is: " << maxChar << std::endl;

        return 0;
    }

/*
    In this example, the getMax function is a generic function using templates (template <typename T>). 
    It takes two arguments of type T and returns the maximum of those two values.

    During compilation, the C++ compiler generates separate versions of the getMax function for each 
    data type it is used with (int, double, char). This allows the function to work with different data 
    types without the need for code duplication.

    Templates are powerful constructs in C++ that facilitate generic programming, making the code more 
    reusable and flexible, as it can handle various data types with a single set of functions or classes.
*/
