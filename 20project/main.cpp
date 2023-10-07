#include <iostream>
/*
Complete the following program skeleton so it asks the user to enter a character.
Store the character in the variable letter. Use a type cast expression with the
variable in a cout statement to display the character’s ASCII code on the screen.
*/

using namespace std;

int main(){

char letter; // variable 'letter' to hold a character 

    cout << "Enter a character to turn into a ASCII number: "; // print's this
    cin >> letter; // sends user input to variable 'letter'
    cout << "The number for " << letter << " is: " << static_cast<int>(letter) << endl;

    return 0;
}