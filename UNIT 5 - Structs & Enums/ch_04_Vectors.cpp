#include <iostream>
#include <vector>

/*
    In C++, vectors are a dynamic array-like data structure provided by the Standard Template 
    library (STL). They allow you to store and manipulate collections of elements of the same 
    data type dynamically. Vectors automatically manage memory allocation and deallocation, making 
    them a flexible and efficient choice for many tasks.
*/

int vectors(){
    std::vector<int> v;
    std::cout << "Size: " << v.size() << std::endl;
    std::cout << "Capacity: " << v.capacity() << std::endl;

    // Add elements to the vector using push_back()
    v.push_back(1);
    std::cout << "Size: " << v.size() << std::endl;
    std::cout << "Capacity: " << v.capacity() << std::endl;

    v.push_back(2);
    std::cout << "Size: " << v.size() << std::endl;
    std::cout << "Capacity: " << v.capacity() << std::endl;

    v.resize(5);
    std::cout << "Size: " << v.size() << std::endl;
    std::cout << "Capacity: " << v.capacity() << std::endl;

    return 0;
}

int vector_loop(){
    std::vector<int> myVector;

    // Add elements to the vector
    for (int i = 0; i < 10; ++i) {
        myVector.push_back(i);
        std::cout << "Size: " << myVector.size() << ", Capacity: " << myVector.capacity() << std::endl;
    }

    return 0;
}

int vector_operations() {
    // Creating a vector
    std::vector<int> myVector;

    // Adding elements
    myVector.push_back(42);          // Add at the end
    myVector.insert(myVector.begin() + 1, 10);  // Insert at a specific position

    // Accessing elements
    int firstElement = myVector[0];   // Access by index
    int secondElement = myVector.at(1); // Access using at() for bounds checking

    // Size and capacity
    int size = myVector.size();       // Number of elements
    int capacity = myVector.capacity(); // Current capacity
    myVector.reserve(100);            // Reserve capacity in advance

    // Iterating through the vector
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }

    // Range-based loop (C++11+)
    for (int num : myVector) {
        std::cout << num << " ";
    }

    // Removing elements
    myVector.pop_back();              // Remove the last element
    myVector.erase(myVector.begin() + 1); // Remove an element by iterator

    // Clearing the vector
    myVector.clear();

    // Check if vector is empty
    bool isEmpty = myVector.empty();

    return 0;
}