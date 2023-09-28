#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float radius;
    float volume;
    float pi = 3.14;

    cout << "Calculate the volume of a sphere:\n" <<
    "__________________________________\n";
    
    cout << "Input the Radius of a sphere: "; cin >> radius;
    volume = (4.0/3.0) * pi * pow(radius, 3);
    cout << "The volume of the sphere is " << volume<< endl;
}
