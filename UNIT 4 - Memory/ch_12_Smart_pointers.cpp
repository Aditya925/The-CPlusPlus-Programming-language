#include <iostream>
#include <memory>     // Header file for using pointers

/*
    Smart pointers in C++ are classes that provide automatic memory management for dynamically 
    allocated objects. They help in avoiding memory leaks and managing the lifetime of objects in 
    a more convenient and safe way. There are three types of smart pointers in C++: unique_ptr, 
    shared_ptr, and weak_ptr.
*/

/*
    -> unique_ptr:
       unique_ptr is a smart pointer that represents sole ownership of the dynamically allocated object.
       When the unique_ptr goes out of scope or is explicitly reset, it automatically deallocates the memory it points to.
*/

    int uniqueptr(){
        // Creating a unique_ptr to manage an integer dynamically allocated
        std::unique_ptr<int> myPtr = std::make_unique<int>(42);

        // Accessing the value using the dereference operator
        std::cout << "Value: " << *myPtr << std::endl;

        // Automatically deallocated when myPtr goes out of scope
        return 0;
    }

/*
    -> shared_ptr:
       shared_ptr is a smart pointer that allows multiple shared_ptr objects to share ownership of the same dynamically allocated object.
       The memory is deallocated only when the last shared_ptr pointing to the object goes out of scope or is explicitly reset.
*/

    int sharedptr(){
        // Creating a shared_ptr to manage an integer dynamically allocated
        std::shared_ptr<int> myPtr1 = std::make_shared<int>(42);
        std::shared_ptr<int> myPtr2 = myPtr1; // Both myPtr1 and myPtr2 share ownership

        // Accessing the value using the dereference operator
        std::cout << "Value: " << *myPtr1 << std::endl;
        std::cout << "Value: " << *myPtr2 << std::endl;

        // Memory will be deallocated when both myPtr1 and myPtr2 go out of scope
        return 0;
    }

/*
    -> weak_ptr:
       weak_ptr is a smart pointer that shares ownership of the object without increasing the reference count.
       It is used in conjunction with shared_ptr to avoid circular reference issues and prevent memory leaks.
*/

    int weakptr(){
        std::shared_ptr<int> sharedPtr = std::make_shared<int>(42);
        std::weak_ptr<int> weakPtr = sharedPtr;

        // Using lock() to convert weak_ptr to shared_ptr and access the object
        if (auto lockedPtr = weakPtr.lock()) {
            std::cout << "Value: " << *lockedPtr << std::endl;
        } else {
            std::cout << "Object is no longer available." << std::endl;
        }

        // Memory deallocation happens automatically when sharedPtr goes out of scope

        return 0;
    }

/*
    Smart pointers are an essential part of modern C++ programming. They provide automatic memory 
    management, reduce the risk of memory leaks, and improve code safety. When using smart pointers, 
    you should prefer unique_ptr when you need exclusive ownership and shared_ptr when you need shared 
    ownership. Use weak_ptr when you want to avoid circular references and prevent strong ownership.
*/