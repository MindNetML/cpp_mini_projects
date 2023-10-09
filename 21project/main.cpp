/*
Guess the Number Game: Develop a number guessing game where the computer selects a random number,
and the player has to guess it. Use loops to give the player multiple chances and if statements 
to provide feedback on whether the guess is too high or too low.

break-down problem
1. computer selects random number
2. player has to guess number
3. player has multiple chances (loop statements)
4. computer tells the player if their close or far from the estimated number(if statements)

sudo-code
1. create random number and set it to variable randomNum
    - ask player to select random number
2. Make prompt to ask player to enter guess
3. make loop for number entered to check if its the same as RandomNum
    - loop doesn't break until its the correct number
4. make conditional statements in while loop that checks if picked number is lower or higher from RandomNum
*/
#include <ios>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main(){
    int randomNum{}; // variable to hold random number
    unsigned seed = time(0); // gets local time in order to combine with random library
    srand(seed); // sets time with random to create random number
    randomNum = rand() % 101; // sets randomNum to random number between 0 - 100
    int playerNum{};

    cout << "Random number Generator! \n"; // title for player

    while (true) { // use an infinite loop for clarity

        cout << "Pick a number between 0-100: " << endl; // demand for player
        cin >> playerNum;

        if (cin.fail()) {  // First, check for invalid input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Properly ignore the invalid input until a newline
            cout << "Invalid input, please enter a NUMBER between 0-100 \n" << endl;
            continue;  // Jump back to the beginning of the loop
        }

        if (playerNum == randomNum) {
            cout << "Correct! Thanks for playing!" << endl; // condition for choosing right number
            break;  // Exit the loop once the correct number is guessed
        } 
        else {
            cout << "Wrong! try again" << endl; // condition for choosing wrong number
            if (playerNum > randomNum) {
                cout << "Its Lower! \n" << endl; // nested condition to help player
            }
            else if (playerNum < randomNum) {
                cout << "Its Higher! \n" << endl; // nested condition to help player
            }
        }
    }

}