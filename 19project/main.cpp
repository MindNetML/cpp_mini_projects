#include <iostream>

// program that reads two different inegers from the user and adds them and outputs the answer

// function to get and return a single number from the user
int readNumber(){
    int num{};
    std::cout << "Enter a number to add: ";
    std::cin >> num;
    return num;
}

// Takes a single parameter and outputs the answer
void writeAnswer(int num){
    std::cout << num << std::endl;

}


// variables x and y take the readNumber function. The output, which is a single value for each, gets added and printed by the writeAnswer funcition
int main(){
    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x + y);
}