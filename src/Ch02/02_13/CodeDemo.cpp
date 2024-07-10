// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 

    // Write your code here
    int sum = 0;
    int nums_size = 5;
    for (int i = 0; i < nums_size; i++){
        sum += nums[i];
    }
    result = sum / (float) nums_size;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
