#include <iostream>
#include <list>

/*
    std::list is a doubly-linked list that allows constant-time insertion and deletion of elements 
    at any position. It doesn't provide random access like a vector but is efficient for frequent insertions 
    and deletions.
*/

int lists(){
    std::list<int> numbers = {1, 2, 3, 4, 5};

    numbers.push_front(0); // Add element 0 to the front
    numbers.pop_back();    // Remove the last element

    // Accessing elements using iterator
    std::cout << "Elements of list: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}