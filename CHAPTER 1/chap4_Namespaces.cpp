#include <iostream>

/*
    - Namespace provide the space where we can define or declare identifier i.e. variable,  method, classes.
    - Using namespace, you can define the space or context in which identifiers are defined i.e. variable, method, 
      classes. In essence, a namespace defines a scope.
*/

namespace first{
    int x = 1;
}
namespace second{
    int x =2;
}

int namespaces_1(){
    int x = 0;
    std::cout << x << std::endl;
    std::cout << "namespaces_1() will print value 0 as declared" << std::endl;
}

int namespaces_2(){
    int x = 0;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    std::cout << "This will print values of x from namespace first & second" << std::endl;
}

int namespaces_3(){
    using namespace first;
    std::cout << x << std::endl;
    std::cout << "namespaces_3 will print value of x from first as we are implementing the 'using' directive" << std::endl;
}

int namespaces_4(){
    using namespace second;
    std::cout << x << std::endl;
    std::cout << "namespaces_4 will print value of x from first as we are implementing the 'using' directive" << std::endl;
}