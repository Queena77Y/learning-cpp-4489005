// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

// Global variables
// - Are accessible to all parts of the code, and because of that, 
// - the memory of the global variable is managed statically by the compiler, 
// - so they are allocated in the data segment of the memory.
// - Once the program ends, its memory is freed.
int a, b = 5;

int main(){
    // Automatic variables (in scope, temporary)
    // - Declared inside of function or loops.
    // - It is accessible within that scope and the scopes inside of it.
    // - Its memory is managed by the compiler and 
    // - is allocated in the stack segment of the memory.
    // - Once the code exit the scope, the variable is deleted and its memory is freed.
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "my_flag: " << my_flag << std::endl;

    my_flag = true;
    std::cout << "my_flag new: " << my_flag << std::endl;
    std::cout << "a + b: " << a + b << std::endl;
    std::cout << "b - a: " << b - a << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned): " << positive << std::endl;
    // Result is 4294967294. Which is 2^32 - 2, the 2's complement expression of -2. Thus, be very careful to use signed or unsigne variable.
    
    std::cout << std::endl << std::endl;
    return (0);
}

