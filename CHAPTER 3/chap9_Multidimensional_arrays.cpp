#include <iostream>

/* 
    syntax = array[rows][columns];
    std::string letters[2][4] = {{ "A", "B", "C", "D" },
                                 { "E", "F", "G", "H" }};
*/

int multidimensional_array(){
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram-1500"}};
    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << std::endl;

    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << std::endl;

    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << std::endl;

    std::cout << "Using for loop" << std::endl;

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}