// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32);
    // (5 / 9) is a constant expression that complier calculates
    // and won't make it to the code that will be executed by the processor.
    // AND since 5 and 9 are integers, the operator calculate the 
    // integer division, the quotient, which is 0.
    // Need floating point division to get the correct number.
    // Convert either 5 or 9 to double, because expressions always 
    // convert their values to the largest type present.

    std::cout << "Fahrenheit : " << fahrenheit << std::endl;
    std::cout << "Celsius: " << celsius << std::endl;

    float weight = 10.99;
    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer part: " << (int) weight << std::endl;
    std::cout << "Fractional part: " << (int) ((weight - (int) weight) * 10000) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
