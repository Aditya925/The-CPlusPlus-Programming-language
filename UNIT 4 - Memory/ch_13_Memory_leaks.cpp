#include <iostream>
#include <memory>
#include <vector>

/*
    Memory Leaks in C++:
    Memory leaks occur when dynamically allocated memory is not properly deallocated, resulting in
    a loss of memory resources. Below is an example that demonstrates a memory leak:
*/

    int exp1(){
        // Memory leak example
        int* myArray = new int[10]; // Dynamically allocate an array of integers

        // ... Some code that uses 'myArray' without freeing the memory ...

        // Memory is not deallocated, causing a memory leak
        return 0;
    }

/*
    In the above example, we dynamically allocate an array of integers using new, but we forget to 
    deallocate it using delete[] after we are done using it. This leads to a memory leak since the 
    memory is not released back to the system, and we lose the ability to access that memory again.
*/

//  Memory Management Best Practices in C++:

/*
    ==> Use RAII and Smart Pointers:
       Prefer using smart pointers (unique_ptr, shared_ptr, weak_ptr) to manage dynamically allocated memory. 
       Smart pointers automatically deallocate memory when they go out of scope, preventing memory leaks.
*/
//  Example using unique_ptr:
    int sol_1(){
        // Using smart pointers to manage memory
        std::unique_ptr<int[]> myArray = std::make_unique<int[]>(10); // Dynamically allocate an array of integers

        // ... Some code that uses 'myArray' ...

        // Memory is automatically deallocated when 'myArray' goes out of scope
        return 0;
    }

/*
    ==> Avoid Using Raw Pointers for Memory Management:
        Prefer using smart pointers or containers (e.g., std::vector, std::string) that manage memory for you. 
        If you must use raw pointers, always deallocate the memory using delete or delete[] when you are done 
        with it.

    ==> Use Containers Instead of Raw Arrays:
        Prefer using standard containers like std::vector over raw arrays. Containers handle memory management 
        automatically, and you don't have to worry about deallocating memory explicitly.
*/
    int sol_2(){
        // Using std::vector to manage memory
        std::vector<int> myVector(10); // Dynamically allocate a vector of integers

        // ... Some code that uses 'myVector' ...

        // No need to manually deallocate memory, vector takes care of it automatically
        return 0;
    }

/*
    ==> Avoid Global Variables:
        Minimize the use of global variables as they tend to complicate memory management. Prefer 
        passing necessary data explicitly to functions.

    ==> Limit the Scope of Pointers:
        Limit the scope of pointers to the smallest possible section of code. This helps reduce the
         risk of forgetting to deallocate memory when the pointer goes out of scope.
*/

/*
    By following these best practices, you can effectively manage memory in your C++ programs, prevent 
    memory leaks, and ensure efficient memory usage. Proper memory management is essential for creating 
    stable and high-performing software.
*/