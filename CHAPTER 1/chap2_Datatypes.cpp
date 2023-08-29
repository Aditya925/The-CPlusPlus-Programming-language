#include <iostream>

/*
   C++ provides a variety of data types that allow you to store different kinds of values. 
   Here are some commonly used data types in C++:

   1. Integer Types:
        int: Represents signed integers.
        short: Represents short integers.
        long: Represents long integers.
        long long: Represents longer integers (C++11 onwards).

   2. Floating-Point Types:
        float: Represents single-precision floating-point numbers.
        double: Represents double-precision floating-point numbers.
        long double: Represents extended-precision floating-point numbers.

   3. Character Types:
        char: Represents a single character.
        char16_t: Represents a 16-bit Unicode character.
        char32_t: Represents a 32-bit Unicode character.
        wchar_t: Represents a wide character.

   4. Boolean Type:
        bool: Represents Boolean values (true or false).

   5. Void Type:
        void: Represents the absence of a type. It is commonly used as a return type for functions that do not return a value.

   6. Derived Types:
        Arrays: Represents a collection of elements of the same type.
        Pointers: Stores the memory address of another variable.
        References: Provides an alias for an existing variable.
        Structures: Allows you to create custom composite types with multiple members.
        Classes: Provides a more advanced form of user-defined composite types, including encapsulation and inheritance.
        Enumerations: Represents a set of named values.

   7. Other Data Types:
        auto: Allows automatic type inference based on the assigned value (C++11 onwards).
        decltype: Determines the type of an expression at compile-time (C++11 onwards).

   C++ also provides type modifiers, such as const (immutable value), signed, unsigned, volatile, and mutable, which can 
   be combined with the above data types to further specify their behavior.
   Additionally, C++ allows you to create your own custom data types using classes and structures, enabling 
   you to define types tailored to your specific needs.

*/

int datatypes(){
    // Integer types
    int age = 25;
    short distance = 1000;
    long population = 1000000000;
    long long veryLargeNumber = 9000000000000;

    // Floating-point types
    float pi = 3.14159f;
    double gravity = 9.8;
    long double veryPreciseValue = 3.141592653589793238;

    // Character types
    char grade = 'A';
    char16_t unicodeChar = u'\u03C0';
    char32_t anotherUnicodeChar = U'\U0001F600';
    wchar_t wideChar = L'W';

    // Boolean type
    bool isTrue = true;
    bool isFalse = false;

    // Outputting values
    std::cout << "Age: " << age << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Population: " << population << std::endl;
    std::cout << "Very large number: " << veryLargeNumber << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Gravity: " << gravity << std::endl;
    std::cout << "Very precise value: " << veryPreciseValue << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Unicode char: " << unicodeChar << std::endl;
    std::cout << "Another Unicode char: " << anotherUnicodeChar << std::endl;
    std::wcout << "Wide char: " << wideChar << std::endl;
    std::cout << "Is true? " << std::boolalpha << isTrue << std::endl;
    std::cout << "Is false? " << std::boolalpha << isFalse << std::endl;

    return 0;
}

/*
    In the example above, we declare variables of different data types and assign values to them. Then, 
    we use std::cout (console output) to print the values of these variables.

    Note that we use different output streams for char and wchar_t types, i.e., std::cout for char and std::wcout 
    for wchar_t, as the latter requires wide character support.

    When you run the code, it will output the values assigned to the variables, demonstrating the usage of 
    various data types in C++.
*/