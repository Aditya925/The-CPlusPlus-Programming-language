#include <iostream>

// foreach loop = loop that eases the traversal over an iterable data set

int foreach_loop(){
    std::string students[] = {"Adi","Ami","Raj","Amy"};
    for (std::string i : students){
        std::cout << i << std::endl;
    }

    return 0;
}