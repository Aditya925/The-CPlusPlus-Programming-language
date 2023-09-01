#include <iostream>

int square_pattern(){
    int sideLength = 5;
    for (int i = 0; i < sideLength; ++i) {
        for (int j = 0; j < sideLength; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}

int right_triangle(){
    int height = 5;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}

int multiplication_table(){
    int tableSize = 10;
    for (int i = 1; i <= tableSize; ++i) {
        for (int j = 1; j <= tableSize; ++j) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}

int prime_number(){
    int n = 50;
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << i << " ";
        }
    }

    return 0;
}