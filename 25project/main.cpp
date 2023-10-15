#include <iostream>
#include "car.h"

using namespace std;

int main(){
    Car mycar; // creates an instance of the 'Car' class

    mycar.brand = "Dodge"; // sets instance 'mycar' attribute of 'brand' to Dodge

    mycar.year = 2015; // sets instance 'mycar' attribute of 'year' to 2015

    cout << "I have a " << mycar.brand << " Challenger " << mycar.year << endl; // prints sentence using class attributes

    mycar.honk(); // calls the honk method on the instance
}