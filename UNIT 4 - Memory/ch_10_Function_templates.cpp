#include <iostream>

/*
    Function templates:
        - Describe what a function looks like.
        - Can be used to generate as many overloaded functions as needed, each using
          different data types
*/

// For input of various data types
template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}
int function_template(){
    std::cout << max(1,2.1) << std::endl;

    return 0;
}