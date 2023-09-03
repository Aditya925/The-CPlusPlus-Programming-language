#include <iostream>
#include <deque>

/*
    std::deque (short for double-ended queue) is similar to a vector but supports fast insertion 
    and deletion at both ends. It provides constant-time access to elements, like a vector.
*/

int deque(){
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    numbers.push_front(0); // Add element 0 to the front
    numbers.pop_back();    // Remove the last element

    // Accessing elements using index
    std::cout << "Elements of deque: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}