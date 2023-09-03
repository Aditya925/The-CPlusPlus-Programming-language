#include <iostream>
#include <map>
#include <unordered_map>

/*
    std::map is an ordered map that stores key-value pairs in sorted order based on 
    keys. std::unordered_map is an unordered map that provides faster access based on keys 
    but without any specific order.
*/

int maps(){
    std::map<std::string, int> orderedMap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 22}};
    std::unordered_map<std::string, int> unorderedMap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 22}};

    orderedMap["David"] = 28; // Add a new key-value pair
    unorderedMap["Eve"] = 26; // Add a new key-value pair

    // Printing elements of ordered map
    std::cout << "Elements of ordered map: ";
    for (const auto& entry : orderedMap) {
        std::cout << entry.first << ":" << entry.second << " ";
    }
    std::cout << std::endl;

    // Printing elements of unordered map
    std::cout << "Elements of unordered map: ";
    for (const auto& entry : unorderedMap) {
        std::cout << entry.first << ":" << entry.second << " ";
    }
    std::cout << std::endl;

    return 0;
}