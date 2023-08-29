#include <iostream>
#include <string>

int array_input(){
    std::string foods[9];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;                       

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ":";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following foods:\n";
    for(int j = 0; !foods[j].empty(); j++){
        std::cout << "-" << foods[j] << " ";
    }
    std::cout << std::endl;

    return 0;
}