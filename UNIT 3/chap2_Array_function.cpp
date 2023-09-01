#include <iostream>

double getTotal(double prices[], int size);

int passing_array_in_function(){
    double prices[] = {49.90, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << total << std::endl;

    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;
    for (int i =0; i < size; i++){
        total += prices[i];
    }
    return total;
}