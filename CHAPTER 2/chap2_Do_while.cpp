#include <iostream>

/* 
    Do-While Loop: The do-while loop is similar to the while loop, but it executes the code block at 
                   least once before checking the condition.
*/

int do_while_loop(){
        int count = 1;
        do {
            std::cout << "Count: " << count << std::endl;
            count++;
        } while (count <= 5);

        return 0;
    }