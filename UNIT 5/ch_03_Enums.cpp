#include <iostream>

/*
    Enums:
        - A user-defined data type that consists of paired named integer constants.
        - Great if you have a set of potential options
*/

enum Day{sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int Enums(){
    Day today = monday;

    switch (today){
        case sunday:
            std::cout << "It's Sunday" << std::endl;
            break;
        case 1:
            std::cout << "It's Monday" << std::endl;
            break;
        case tuesday:
            std::cout << "It's Tuesday" << std::endl;
        case 3:
            std::cout << "It's Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "It's Thursday" << std::endl;
            break;
        case 5:
            std::cout << "It's Friday" << std::endl;
            break;
        case 6:
            std::cout << "It's Saturday" << std::endl;
            break;
    }

    return 0;
}