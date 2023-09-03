#include <iostream>

/*
    Exception handling is a powerful feature in C++ that allows you to deal with runtime errors and 
    exceptional situations gracefully. It involves the use of try, catch, and throw blocks. The basic 
    idea is that you enclose the code that might throw an exception inside a try block, and if an exception 
    is thrown, it is caught and handled in the corresponding catch block.
*/

//  A function that divides two numbers and throws an exception if the denominator is zero.

    double divide(int numerator, int denominator){
        if (denominator == 0) {
            throw std::runtime_error("Division by zero is not allowed.");
        }

        return static_cast<double>(numerator) / denominator;
    }
    int exception_example(){
        int num, den;
        std::cout << "Enter the numerator: ";
        std::cin >> num;

        std::cout << "Enter the denominator: ";
        std::cin >> den;

        try {
            double result = divide(num, den);
            std::cout << "Result of division: " << result << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

        std::cout << "Program continues after exception handling." << std::endl;
        return 0;
    }

/*
    In this example, we have a function divide that takes two integers, numerator and denominator, and returns 
    the result of dividing them. If the denominator is zero, it throws a std::runtime_error with an appropriate 
    error message.

    In the exception_example() function, we prompt the user to enter the numerator and denominator values. We use a try block 
    to call the divide function. If the division operation encounters a division by zero, it throws the exception, 
    which is then caught and handled in the catch block. In this case, we simply print the error message using 
    e.what(), but you could handle the exception differently depending on your application's needs.

    Keep in mind that you can create custom exception classes by deriving them from std::exception or any of its
    subclasses to provide more specific information about the exception that occurred.

    Remember to always handle exceptions appropriately in your code to improve error handling and make your program 
    more robust.
*/
