// program that reads two different inegers from the user and adds them and outputs the answer

int readNumber(); // forward declare readNumber from io.cpp
void writeAnswer(int num); // forward declare writeAnswer from io.cpp


// variables x and y take the readNumber function. The output, which is a single value for each, gets added and printed by the writeAnswer funcition
int main(){
    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x + y);
}