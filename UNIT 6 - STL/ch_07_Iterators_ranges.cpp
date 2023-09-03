#include <iostream>
#include <vector>
#include <algorithm>

/*
    Iterators in C++ are objects that provide a way to access and traverse elements in a 
    container (e.g., arrays, vectors, lists). They work like pointers and can be used to read 
    or modify the elements of a container. The Standard Template Library (STL) provides 
    various types of iterators, such as begin() and end() iterators, to represent the beginning
    and end of a container.
*/

// Using iterators to print elements of a vector

    int iterators() {
        std::vector<int> numbers = {1, 2, 3, 4, 5};

        // Using iterators in a for loop to print elements
        for (auto it = numbers.begin(); it != numbers.end(); ++it) {
            std::cout << *it << " ";             // Dereference the iterator to get the element value
        }
        std::cout << std::endl;

        return 0;
    }

/* 
    Ranges in C++ represent a pair of iterators that delimit a sequence of elements in a container. 
    They are used in various STL algorithms to specify the portion of the container on which the algorithm 
    should operate.
*/

// Using a range with std::for_each algorithm to print elements of a vector

    int ranges() {
        std::vector<int> numbers = {1, 2, 3, 4, 5};

        // Using std::pair to define a range
        auto range = std::make_pair(numbers.begin(), numbers.end());

        // Using the std::for_each algorithm with the defined range to print elements
        std::for_each(range.first, range.second, [](int num) {
            std::cout << num << " ";
        });
        std::cout << std::endl;

        return 0;
    }

/*
    In summary, iterators provide a way to access elements in a container, while ranges specify a 
    portion of the container for algorithms to work on. Both iterators and ranges are essential in C++ 
    programming when dealing with containers and working with the STL algorithms efficiently.
*/

