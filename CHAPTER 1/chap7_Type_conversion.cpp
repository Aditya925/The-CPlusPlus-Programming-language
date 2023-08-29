#include <iostream>

/*
    Implicit Type Conversion Also known as ‘automatic type conversion’.
    - Done by the compiler on its own, without any external trigger from the user.
    - Generally takes place when in an expression more than one data type is present. In such condition type 
      conversion (type promotion) takes place to avoid lose of data.
    - All the data types of the variables are upgraded to the data type of the variable with largest data type.
*/

int implicit_conversion(){
    int x = 10; // integer x
    char y = 'a'; // character c
  
    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;
  
    // x is implicitly converted to float
    float z = x + 1.0;
  
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;
  
    return 0;
}

/*
    Explicit Type Conversion: This process is also called type casting and it is user-defined. Here the user 
    can typecast the result to make it of a particular data type.

    In C++, it can be done by two ways:
    - Converting by assignment: This is done by explicitly defining the required type in front of the expression 
      in parenthesis. This can be also considered as forceful casting.
      Syntax:
      (type) expression

    - Conversion using Cast operator: A Cast operator is an unary operator which forces one data type to be converted 
      into another data type.
      C++ supports four types of casting:
      ~ Static Cast
      ~ Dynamic Cast
      ~ Const Cast
      ~ Reinterpret Cast
*/

int explicit_conversion(){
    double x = 1.2;
  
    // Explicit conversion from double to int
    int sum = (int)x + 1;
    std::cout << "Sum = " << sum << std::endl;

    std::cout << char(100);   // Output is letter 'D'
  
    return 0;
}

int type_conversion(){
    std:: cout << implicit_conversion() << std::endl;
    std:: cout << explicit_conversion() << std::endl;
    return 0;
}
