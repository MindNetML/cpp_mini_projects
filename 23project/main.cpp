/*
Bubble sort Project:

How Bubble Sort Works:
    Start at the beginning of the list.
    Compare the first two elements.
    If the first element is greater than the second element, they are swapped.
    Move to the next element and repeat step 2 until the end of the list is reached.
    Go back to the beginning of the list and repeat the steps until no swaps are made (i.e., the list is sorted).

Visualization:

Consider the array: 5 1 4 2 8

First Pass:

    ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements and swaps them.
    ( 1 5 4 2 8 ) –> ( 1 4 5 2 8 ), Swap since 5 > 4
    ( 1 4 5 2 8 ) –> ( 1 4 2 5 8 ), Swap since 5 > 2
    ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), No swap since 5 < 8

Second Pass:

    ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
    ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
    ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "bubblesort.h"


using namespace std;


int main(){
    int array[5] = {}; // set empty array that holds 5 numbers
    int n = size(array); // sets size of array
    srand(time(0)); // uses time with the random library to randomize generations based on current time

    for (int i = 0; i < 5; i++){   // loop for setting random numbers to array
        int random = rand() % 100;
        array[i] += random;
    }

    cout << "\nUnsorted array: \n";
    for (int element: array){ // loop for iterating through array
        cout << element << " ";
    }
    cout << endl;
    bubblesort(array, n); // calling bubblesort

    cout << "\nSorted array: \n";

    for (int i=0; i < n; i++){ 
        cout << array[i] << " ";
    }
    return 0;
}
