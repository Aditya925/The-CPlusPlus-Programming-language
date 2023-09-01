#include <iostream>

void variables(){
    /*

       In C++, variables are used to store and manipulate data. They act as named memory locations 
       that hold values of a particular type. Before using a variable, you need to declare it by specifying 
       its name and data type. Here's an example of variable declaration in C++:

    */

      int age;                // declaration of an integer variable named 'age'
      double salary;          // declaration of a double (floating-point) variable named 'salary'
      char grade;             // declaration of a character variable named 'grade'

    /*

       In the example above, age is an integer variable, salary is a double variable, and grade is a character variable.
       After declaring a variable, you can assign a value to it using the assignment operator (=). 
       Here's an example of variable assignment:

    */

      age = 25;               // assigning the value 25 to the 'age' variable
      salary = 2500.75;       // assigning the value 2500.75 to the 'salary' variable
      grade = 'A';            // assigning the character 'A' to the 'grade' variable


    // You can also declare and assign a value to a variable in a single statement, which is known as initialization:

      int quantity = 10;          // declaring and initializing an integer variable 'quantity'
      double pi = 3.14159;        // declaring and initializing a double variable 'pi'
      char symbol = '#';          // declaring and initializing a character variable 'symbol'

    /*
       C++ supports a wide range of data types, including integers (int, short, long, etc.), floating-point numbers (float, double),
       characters (char), Booleans (bool), and more. You can also create your own custom data types using structures, classes, 
       and enumerations.Variables can be used in expressions, passed as function arguments, and manipulated using operators 
       and functions relevant to their data type.

    */

      std::cout << "Age is: " << age << std::endl;

}