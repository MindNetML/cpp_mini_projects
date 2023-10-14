#include <iostream>
#include <vector>

using namespace std;

/*
1. Basic Vector Operations:
    Create a vector of integers.
    Add elements to it using the push_back method.
    Print out all elements using a loop.
    Use the size method to print out the number of elements in the vector.
    Remove the last element using the pop_back method and print the vector again.
*/


int main(){

    vector<int> vec; // empty vector

    for (int i=0; i < 5; ++i){
        vec.push_back(i + 1); // loop that sets i to 0. Then makes condtional if i is less than 5, add 1 to i
    }
    for (int i: vec){
        cout << i; // loop to print vector
    }

    cout << "\n" << size(vec) << endl; // Used size method to print length of vector

    vec.pop_back(); // method to remove last element in vector (5)

    for (int i : vec){ 
        cout << i; // loop through vector again to confirm its gone
    }


}