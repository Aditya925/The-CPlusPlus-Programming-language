#include <iostream>

/*
    For Loop: The for loop allows you to specify an initialization, a condition, and an iteration expression 
              all in one line.
*/

int for_loop(){
    for (int i = 1; i <= 5; i++) {
        std::cout << "Count: " << i << std::endl;
    }

    return 0;
}