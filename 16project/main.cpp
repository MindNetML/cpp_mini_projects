#include <iostream>


int main(){

#define DEBUG_MODE

#ifdef DEBUG_MODE
    // This code will be compiled if DEBUG_MODE is defined
    std::cout << "Debugging is enabled." << std::endl;
#else
    // This code will be compiled if DEBUG_MODE is NOT defined
    std::cout << "Debugging is disabled." << std::endl;
#endif
}
