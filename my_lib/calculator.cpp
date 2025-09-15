#include "my_lib/calculator.h"
#include <iostream>
#include <stdexcept>


namespace my_lib{

    // returns a + b
    float add(float a, float b){
        return a + b;
    }

    // returns a - b
    float sub(float a, float b){
        return a - b;
    }

    // returns a * b
    float mul(float a, float b){
        return a * b;
    }

    // returns a / b
    float div(float a, float b){
        if (b == 0){
            throw std::invalid_argument("Division by zero");
        }

        return a / b;
    }
}