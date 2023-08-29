#include <iostream>

// While Loop:The while loop repeatedly executes a block of code as long as a given condition is true.

int while_loop(){
        int count = 1;

        while (count <= 5) {
            std::cout << "Count: " << count << std::endl;
            count++;
        }

        return 0;
    }