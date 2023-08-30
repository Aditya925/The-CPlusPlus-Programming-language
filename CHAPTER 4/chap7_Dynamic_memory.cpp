#include <iostream>

/*
    Dyanamic memory:
        - Memory that is allocated after the program is already compiled & running.
        - Use the 'new' operator to allocate memory in the heap rather than the stack.
        - Useful when we don't know how much memory do we need. Makes our program more flexible, 
          especially when accepting user input.
*/

int dynamic_memory(){
    int *pnum = NULL;

    pnum = new int;
    *pnum = 21;

    std::cout << "address " << pnum << std::endl;
    std::cout << "value " << *pnum << std::endl;

    delete pnum;

    return 0;
}