#include <iostream>

using namespace std;

// program to double number using function

int getvalue(){  // this is a function
    cout << "Enter integer: " << endl;
    int value{};
    cin >> value;
    return value; // It returns the value it got from the above logic
}

int main(){
    int num{getvalue()}; // We call the funciton here by setting it to num (functions called 'getvalue()')
    cout << "Your number is: " << num << ". Doubled its: " << num * 2 << endl; // notice how the function returns a value, in our case a integer so we can do arithmetic with it
}