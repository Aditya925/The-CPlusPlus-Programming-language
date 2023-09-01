#include <iostream>

int dynamic_array(){
    
    char *pGrades = NULL;         // Declaring a null pointer
    int size;

    std::cout << "How many grades to enter in?:" << std::endl;
    std::cin >> size;

    pGrades = new char[size];     // allocating dynamic memory to array
    for(int i = 0; i < size; i++){
        std::cout << "Enter Grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    // Displaying array
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }
    std::cout << std::endl;

    delete[] pGrades;              // Delete to prevent memory leak

    return 0;
}