// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// Pre-processor directives
// <iostream>:
// - C++ standard library
// - print text to screen and take input from keyboard.
#include <iostream>
#include <string>

// main entry point of the program
int main(){
    // "::" - scope resolution operator
    // cout - character output
    // "<<" - left-bound insertion operator
    std::cout << "Hello World!" << std::endl;
    // Create separation.
    std::cout << std::endl << std::endl;

    // Get user input, and print it back with a message.
    std::string user_input;
    // std::flush - make sure the message is sent to the screen
    // before waiting for the user input.
    std::cout << "Please enter your name: " << std::flush;
    std::cin >> user_input;
    std::cout << "Hello, " << user_input << "! Nice to meet you!" << std::endl;

    std::cout << std::endl << std::endl;
    // 0 - usualy represents that there is no error in the program.
    return(0);
}

// 2. Basic Data Types

// (1) Integers
//  - Signed or unsigned
//  - int 
//    - Implementation dependent, could be 32 bits or 16 bits long.
//  - char
//    - 8 bits, could represent integer or other ASCII characters.
//  - stdint.h contains portable types like: 
//    - uint32_t: unsigned 32 bits integer
//    - int8_t: signed 8 bits integers 

// (2) Floating-Point Numbers
// - Floating-point numbers respresent real numbers: 
//   - e.g. 3.14159, 1.333, 0.5, -12.44
// - Implements IEEE754 binary floating-point number standards
// - Three types:
//   - float
//   - double: much larger range and precision than float, 
//             but much more expensive in cumputation
//   - long double

// (3) Boolean type
// - lower case
// - true, false
// - Anything not 0 is true

// (4) String Class
// - String are not natively supported by the language.
// - However, they are supported in the standard library as a class.
// - <string> provides the string class with lots of functions.

// (5) Pointers
// - Special data type for a memory address.
// - Pointers act as references to variables.
// - The same pointer may be used to access many diffrent variables swquentially.

// 3. Variables
// - Must be declared before used
// - Declaration must have type and a name, and may contain initialization
// - (1) Constant literals
//     - Example initializations
//       - int: 123, -5, 023, 0x3A, 0b1100, 23U
//       - float: 23.0f, 0.0f (at least one number after decimal and then an "f"
//       - double: 25.4
//       - char: 'a', 'X', '\0', '\n' (single quotes)
//         - or int as long as it can fit in 8 bits
//         - '\0': null character to limit the end of the string
//       - string: "hello"








