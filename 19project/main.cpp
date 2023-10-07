#include "io.h"
// program that reads two different inegers from the user and adds them and outputs the answer


// variables x and y take the readNumber function. The output, which is a single value for each, gets added and printed by the writeAnswer function
int main(){
    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x + y);
}