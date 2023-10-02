#include <iostream>

// number doubler

using namespace std;

int main(){
    cout << "Enter an integer: "; // prints this line

    int num{}; // holds our int variable
    cin >> num; // user input and stores it to the above int variable

    cout << "Double " << num << " is: " << num * 2  << endl; // prints the final doubled number
    cout << "Triple " << num << " is: " << num * 3  << endl; 
}

/*
Edit the program to output the following:

Enter an integer: 4
Double 4 is: 8
Triple 4 is: 12
*/