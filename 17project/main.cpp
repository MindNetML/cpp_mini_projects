#include <iostream>
#include "add.h"


// Its good practice to avoid #including .cpp files
// calling add function from add.cpp
int add(int x, int y);

int main(){
    std::cout << "This function is summing two numbers: " << add(5, 7) << std::endl;
}