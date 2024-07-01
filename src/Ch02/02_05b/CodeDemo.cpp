// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++";

    std::cout << "a is: " << typeid(a).name() << std::endl;
    std::cout << "b is: " << typeid(b).name() << std::endl;
    std::cout << "c is: " << typeid(c).name() << std::endl;
    std::cout << "d is: " << typeid(d).name() << std::endl;
    std::cout << "e is: " << typeid(e).name() << std::endl;
    std::cout << "f is: " << typeid(f).name() << std::endl;
    std::cout << "g is: " << typeid(g).name() << std::endl;
    /*
    a is: i
    b is: l
    c is: f
    d is: d
    e is: b
    f is: c
    g is: PKc - pointer to const char, fancy name of string
    */
    std::cout << std::endl << std::endl;
    return (0);
}
