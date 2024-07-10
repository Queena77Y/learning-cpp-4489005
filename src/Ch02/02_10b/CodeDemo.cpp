// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66; // double type without the training "f"
    // double will be implicitly converted to float here.
    sgn = flt; // implicit truncate the number into integer
    unsgn = sgn; // implicitly convert to 2s compliment version

    std::cout << "float: " << flt << std::endl;
    std::cout << "signed: " << sgn << std::endl;
    std::cout << "unsigned: " << unsgn << std::endl;
    std::cout << "casting unsigned to signed: " << (int32_t) unsgn << std::endl;

    // float: -7.66
    // signed: -7
    // unsigned: 4294967289
    // casting unsigned to signed: -7

    std::cout << std::endl << std::endl;
    return (0);
}
