#include "my_lib/calculator.h"
#include <iostream>

int main(){
    float a, b;

    std::cout << "Enter two numbers:\n" << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    
    std::cout << "a + b = " << my_lib::add(a, b) << "\n";
    std::cout << "a - b = " << my_lib::sub(a, b) << "\n";
    std::cout << "a * b = " << my_lib::mul(a, b) << "\n";
    std::cout << "a / b = " << my_lib::div(a, b) << "\n";

    return 0;
}