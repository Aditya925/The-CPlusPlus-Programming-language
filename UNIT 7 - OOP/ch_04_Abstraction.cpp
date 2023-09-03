#include <iostream>

/*
    Abstraction:
        - Hiding unnecessary data from outside class.
        - getter = function that makes a private attribute readable.
        - setter = function that makes a private attribute readable.
*/

class Stove{
    private:
        int temperature = 0;
    public:
        int getTemperature(){                // Making private info readable i.e getter function
            return temperature;
        }
        void setTemperature(int temp){       // Making private info writable i.e setter function
            this -> temperature = temp;
        }
};

int abstraction(){
    Stove stove;

    stove.setTemperature(10000);
    std::cout << "The temperature is: " << stove.getTemperature() << std::endl;

    return 0;
}