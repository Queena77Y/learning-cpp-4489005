// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 
/*
- Enum a list of named integer constants
- Inherited from C, so not quite OOP friendly
 - usually operate in the global scope
   - can lead to naming conflict or namespace pollution.
- Limited typle safety
 - Allow implicit convert between enums and integer.

Better alternatives:
Enum Classes
- known as scoped enums or strongly typed enums
- Encapsulated within a class scope
- Type safety enforced
*/
#include <iostream>
#include <cstdint>

// C style enum
// Considered as global value.
// enum class cow_purpose {dairy, meat, hide, pet};

// enum class
enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int meat = 8;
    cow_purpose a; // strongly typed

    a = cow_purpose::meat;

    // Have to convert from type "cow_purpose" to int to use cout to print. cout only support basic types.
    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
