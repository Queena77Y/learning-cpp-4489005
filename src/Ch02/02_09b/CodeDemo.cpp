// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

/*
Strings

- Not a native type in the language
- Follows same implementation as C:
    - Strings are arrays of chars, ending with the null character (0).
*/

#include <iostream>
#include <string>
// Contains functions that handle character array strings.
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    // character arrays
    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up?";
    // concat the strings together
    // strncat() for this IDE, might be other functions for other IDE.
    // strncat(destination string, another string, length);
    // first string get modified.
    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl;
    // Usually only use character arrays when need to be compatible with existing C code. 

    std::string std_str1 = "Hi y'all! ";
    std::string std_str2 = "How is it going?";
    // Operator overloading: redefine the operation of an operator.
    // E.g. + for numbers is plus, for strings it is concatenate.
    // Operands are not modified.
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
