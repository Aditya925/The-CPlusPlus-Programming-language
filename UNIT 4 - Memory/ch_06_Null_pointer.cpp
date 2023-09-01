#include <iostream>

int null_pointer(){
    int *p = nullptr;
    int x = 123;

    p = &x;

    if(p == nullptr){
        std::cout << "Pointer has not assigned any value" << std::endl;
    }
    else{
        std::cout << "Value is assigned" << std::endl;
    }

    return 0;
}