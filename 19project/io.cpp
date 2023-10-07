#include <iostream>
#include "io.h"

// function to get and return a single number from the user
int readNumber(){
    int num{};
    std::cout << "Enter a number to add: ";
    std::cin >> num;
    return num;
}

// Takes a single parameter and outputs the answer
void writeAnswer(int num){
    std::cout << "The answer is: " << num << std::endl;

}