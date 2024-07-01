// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

// Preprocessor directives
// - C++ code goes through a pipeline of software tool chain which extract the  semantic elements written by the programmer.
// - One of the first step is preprocessor, a piece of software that is part of the complier tool chain.
// - Directives tell the preprocessor what to add or remove in the code. 
// - Then the compiler will receive a somewhat modified/processed code.
// E.g. #include - adding libraries
//      #define - define constants
//      #ifdef - selecting code block for different compling senarios.

// #include - replace this line with all the code from the referenced file
#include <iostream>
#include <string>
// stdint is a C standard library, made available with a "c" prefix for C++.
#include <cstdint>

// #define - define symbols as what ever you mean  on the right.
// The symbols are called macros.
// It find and replace the symbols in your code with the value.
#define CAPACITY 5000
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

// If the macro "DEBUG" is defined, then this block of code will run.
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif

    large += small; // large = large + small;
    std::cout << "large: " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
