#include <iostream>
#include <iterator> // used to get the size funciton
/*
Working with arrays
*/

using namespace std;

int main(){
    int myarray[] = {5, 4, 3, 2, 1};  // array I'll be working with
    int totnum{}; // holds the total sum of the array
    int arraysize = size(myarray); // size of array(as in length)
    int max{myarray[0]}; // holds maximum value of array and starts by holding the first value of the array
    int min{myarray[0]}; // holds minimum value of array and starts by holding the first value of the array
    int average{}; // holds the average for array

    for (int element: myarray){ // for loop to iterate through array 
        if (element > max){
            max = element; // conditional to get the max of the array
        }
        if (element < min){
            min = element; // conditional to get the min of the array
        }
        totnum += element; // adds array values to element to get total sum
    }

    average = totnum / sizeof(totnum); // gets average of array

    cout << "The max of the array is: " << max << endl;
    cout << "The min of the array is: " << min << endl;
    cout << "The average of the array is: " << average << endl;
    cout << "The element is: " << totnum << endl;
}