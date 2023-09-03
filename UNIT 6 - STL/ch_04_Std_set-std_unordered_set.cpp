#include <iostream>
#include <set>
#include <unordered_set>

/*
    std::set is an ordered set that stores unique elements in a sorted order. 
    std::unordered_set is an unordered set that stores unique elements with faster insertion 
    but without any specific order.
*/

int sets(){
    std::set<int> orderedSet = {5, 2, 8, 1, 9, 3};
    std::unordered_set<int> unorderedSet = {5, 2, 8, 1, 9, 3};

    orderedSet.insert(4); // Add element 4 to the set
    unorderedSet.insert(6); // Add element 6 to the set

    // Printing elements of ordered set
    std::cout << "Elements of ordered set: ";
    for (int num : orderedSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Printing elements of unordered set
    std::cout << "Elements of unordered set: ";
    for (int num : unorderedSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}