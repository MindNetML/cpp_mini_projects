#include <iostream>

using namespace std;

int main(){
    float f;
    float c;
    cout << "Convert temperature in Farenheit to Celsius:\n" << "________________________" << endl;
    cout << "Input the degrees in Farenheit: "; cin >> f;
    c = 5.0/9.0 * (f - 32.0);
    cout << "Your temperature in Celsius is : " << c << endl;
}
