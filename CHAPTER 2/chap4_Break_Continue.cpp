#include <iostream>

/* 
    Break and Continue Statement: The break statement is used to exit from a loop or switch statement prematurely. 
                                  The continue statement is used to skip the rest of the current iteration of a 
                                  loop and continue to the next iteration.
*/

int break_continue(){
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "Breaking the loop." << std::endl;
            break; // Exit the loop when i becomes 5
        }

        if (i % 2 == 0) {
            continue; // Skip even numbers
        }

        std::cout << "Count: " << i << std::endl;
    }

    return 0;
}