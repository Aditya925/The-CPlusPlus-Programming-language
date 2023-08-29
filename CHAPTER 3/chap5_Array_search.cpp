#include <iostream>

int Search(int array[], int size, int element);

int array_search(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for" << std::endl;
    std::cin >> myNum;

    index = Search(numbers, size, myNum);
    if(index != -1){
        std::cout << myNum << " is at index " << index << std::endl;
    }
    else{
        std::cout << myNum << " is not in array." << std::endl;
    }

    return 0;
}

int Search(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}