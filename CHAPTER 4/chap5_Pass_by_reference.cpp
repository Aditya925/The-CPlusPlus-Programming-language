#include <iostream>

void swap(std::string &x, std::string &y);

int pass_by_reference(){
    std::string x = "SUPERMAN";
    std::string y = "BATMAN";

    swap(x,y);

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    return 0;
}
void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

/*
    In C++, there are two common ways to pass arguments to functions: pass by value and pass by reference. 
    Each method has its own advantages and use cases.

    - Pass by Value:
      When you pass an argument by value, a copy of the argument's value is made and provided to the 
      function. Any modifications made to the parameter within the function will not affect the 
      original argument outside the function. Here are the advantages of pass by value:

      1. Data Isolation: Since the function receives a copy of the value, changes made to the parameter 
         within the function do not affect the original value outside the function. This provides data 
         isolation and prevents unintended side effects.

      2. Predictable Behavior: The behavior of the function is more predictable since you know that 
         the function cannot modify the original value.

      3. Simplicity: Pass by value is straightforward to use and understand, especially for basic data types.

    - Pass by Reference:
      When you pass an argument by reference, you are passing a reference to the original variable. Any changes 
      made to the parameter within the function directly affect the original variable. Here are the advantages 
      of pass by reference:

      1. Efficiency: Passing by reference avoids the overhead of creating a copy of the data, which can be 
         especially important for large objects. It can improve performance and save memory.

      2. Modification: If you need to modify the original value inside the function, pass by reference allows 
         you to do so directly. This can be useful when you want the function to have an impact on the original value.

      3. Avoiding Copying: For complex data types like user-defined objects or containers, passing by reference 
      avoids the need to create and copy potentially large amounts of data.

    In general, the choice between pass by value and pass by reference depends on the specific requirements of 
    your program:
    - Use pass by value when you want to protect the original data from being modified by the function and 
      when you're working with small or simple data types.

    - Use pass by reference when you want the function to modify the original data, when you're working with 
      large or complex data types to avoid copying, and when you need to achieve better performance.

    In addition to these, there is also a third option: pass by const reference. This is used when you want to 
    prevent modification of the original value inside the function, while still avoiding the overhead of copying 
    the data. It combines the advantages of both pass by value and pass by reference in certain scenarios.

*/