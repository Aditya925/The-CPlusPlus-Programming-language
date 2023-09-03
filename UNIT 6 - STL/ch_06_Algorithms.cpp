#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>             // Include the <numeric> header for std::accumulate

/* 
    std::sort
    Sorts elements in a range in ascending order.
*/

    int sort_algorithm(){
        std::vector<int> numbers = {5, 2, 8, 1, 9, 3};
        std::sort(numbers.begin(), numbers.end());
        std::cout << "Sorted numbers: ";
        for (int num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        return 0;
    }

/*
    std::find
    Searches for an element in a range and returns an iterator to the first occurrence.
*/

    int find_algorithms(){
        std::vector<int> numbers = {5, 2, 8, 1, 9, 3};

        int key = 8;
        auto it = std::find(numbers.begin(), numbers.end(), key);
        if (it != numbers.end()) {
            std::cout << "Element " << key << " found at position " << std::distance(numbers.begin(), it) << std::endl;
        } else {
            std::cout << "Element " << key << " not found." << std::endl;
        }

        return 0;
    }

/*
    std::accumulate
    Computes the sum of elements in a range.
*/

    int accumulate_algorithm(){
        std::vector<int> numbers = {1, 2, 3, 4, 5};
        int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
        std::cout << "Sum of elements: " << sum << std::endl;

        return 0;
    }

/*
    std::for_each
    Applies a function to each element in a range.
*/

    void printSquare(int num){
        std::cout << num * num << " ";
    }
    int for_each_algorithm(){
        std::vector<int> numbers = {1, 2, 3, 4, 5};
        std::cout << "Squares of elements: ";
        std::for_each(numbers.begin(), numbers.end(), printSquare);
        std::cout << std::endl;

        return 0;
    }

/*
    std::transform
    Applies a function to each element in a range and stores the result in another container.
*/

    int addOne(int num){
        return num + 1;
    }
    int transform_algorithm(){
        std::vector<int> numbers = {1, 2, 3, 4, 5};
        std::vector<int> result;

        std::transform(numbers.begin(), numbers.end(), std::back_inserter(result), addOne);

        std::cout << "Original numbers: ";
        for (int num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        std::cout << "Result after adding one to each element: ";
        for (int num : result) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        return 0;
    }
