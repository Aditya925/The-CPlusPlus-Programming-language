#include <iostream>

/*
    fill() = Fills a range of element with specified value
             fill(begin, end, value)
*/

int Fill(){
    const int size = 150;

    std::string foods[size];
    fill(foods, foods + size, "Pizza");
    for(std::string food : foods){
        std::cout << food << "\n";
    }

    std::string numbers[size];
    fill(numbers, numbers + (size/2), "108");
    fill(numbers + (size/2), numbers + size, "2100");
    for(std::string num : numbers){
        std::cout << num << "\n";
    }


    return 0;
}