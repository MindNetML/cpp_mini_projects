// Include the necessary libraries.
// iostream is for input-output stream operations (like printing to the console).
#include <iostream>
// stdlib.h is for various general-purpose functions, including random number generation.
#include <stdlib.h>
// time.h is for time-related functions.
#include <time.h>

// This line tells the compiler to use the standard (std) namespace.
// This allows us to write "cout" instead of "std::cout" and similarly for other standard functions and objects.
using namespace std;

int main(){
    // Seed the random number generator.
    // time(NULL) returns the current time.
    // By providing this as a seed to srand(), it ensures that the sequence of random numbers is different 
    // each time the program is run (as long as it's not run multiple times in the same second).
    srand(time(NULL));

    // Print a message to the console.
    cout << "Here's some random numbers for you: " << endl;

    // Start a loop that will run 10 times.
    for(int i = 0; i < 10; i++)
        // Generate a random number, take its remainder when divided by 50 (so it's in the range 0 to 49),
        // and then print it to the console followed by a space.
        cout << rand() % 50 << " ";
    
    // Print a newline to the console for better formatting.
    cout << endl;
}
