// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 


// Constants
// - Could be defined via directives #define macros, but sometimes not encouraged because macro don't have context, no type or syntax correctness.
// - or couble defined as variables using const qualifiers.
//   - has to define a type and scope encapsulation is enforced.
//   - const qualifier in C and C++ are different.

// Arrays
// - A collection of data
// - Homogeneous, all same type
// - Fixed size, cannot resize
// - Contiguous in memory, a sequential block of memory addresses.


#include <iostream>

// Const defined as macro.
// #define AGE_LENGTH 4

int main(){
    // Const defined as variable.
    // Size has a specific type instead of e.g. integer
    const size_t AGE_LENGTH = 4; 
    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9}; 
    // Implicit type conversion from double to float.
    // "auto" does not work for arrays.
 
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age_length = " << AGE_LENGTH <<std::endl;
    std::cout << "Age[0] = " << age[0] <<std::endl;
    std::cout << "Age[1] = " << age[1] <<std::endl;
    std::cout << "Age[2] = " << age[2] <<std::endl;
    std::cout << "Age[3] = " << age[3] <<std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "Temperature[0] = " << temperature[0] <<std::endl;
    std::cout << "Temperature[1] = " << temperature[1] <<std::endl;
    std::cout << "Temperature[2] = " << temperature[2] <<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
