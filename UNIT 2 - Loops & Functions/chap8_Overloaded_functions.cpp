#include <iostream>

void bakepizza(){
    std::cout << "Here is your pizza" << std::endl;
}
void bakepizza(std::string toppings){
    std::cout << "Here is your pizza with " << toppings << std::endl;
}
void bakepizza(std::string toppings,std::string pizza_size){
    std::cout << "Here is your" << pizza_size << " pizza with " << toppings << std::endl;
}