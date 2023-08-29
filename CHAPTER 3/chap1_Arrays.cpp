#include <iostream>

// array = a data structure that can hold multiple values

int arrays(){
    std::string cars[] = {"Tesla" , "Mahindra" , "Toyota"};
    std::cout << cars[1] << std::endl;

    int numbers[5] = {1,2,3,4,5};
    std::cout << numbers[3] << std::endl;

    return 0;
}

int iterate_arrays(){
    int newnumbers[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; ++i) {
        std::cout << newnumbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}