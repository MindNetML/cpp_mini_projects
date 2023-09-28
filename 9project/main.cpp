#include <iostream>

using namespace std;

void printed(int num);

int main() {
    int number;
    // Prompt the user to input a single-digit number
    cout << "Make a rectangular shape by a single digit number:" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Input a number between 0-9: ";
    
    // make user input number
    cin >> number;
    printed(number);
    }

void printed(int num){
    cout << num<<num<<num<<num<<endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num<<num<<num<<num<<endl;
}






