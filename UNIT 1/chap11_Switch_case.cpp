#include <iostream>

// switch = alternative to using many "else-if" statements

int switch_case_age(){
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "JANUARY";
            break;
        case 2:
            std::cout << "FEBRUARY";
            break;
        case 3:
            std::cout << "MARCH";
            break;
        case 4:
            std::cout << "APRIL";
            break;
        case 5:
            std::cout << "MAY";
            break;
        case 6:
            std::cout << "JUNE";
            break;
        case 7:
            std::cout << "JULY";
            break;
        case 8:
            std::cout << "AUGUST";
            break;
        case 9:
            std::cout << "SEPTEMBER";
            break;
        case 10:
            std::cout << "OCTOBER";
            break;
        case 11:
            std::cout << "NOVEMBER";
            break;
        case 12:
            std::cout << "DECEMBER";
            break;
        default:
            std::cout << "Please enter numbers only (1-12)" << std::endl;
    }
    return 0;
}

int switch_case_grade(){
    char grade;
    std::cout << "Enter your grade (A-E): ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'E':
            std::cout << "You failed";
            break;
        default:
            std::cout << "Please only enter from (A-E)" << std::endl;
    }
    return 0;
}