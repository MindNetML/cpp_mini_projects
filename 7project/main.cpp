#include <iostream>

using namespace std;

int main(){
    int length;
    int width;
    int area;
    int perimeter;

    cout << "Find the Area and Perimeter of a Rectangele: \n" <<
    "________________________________________" << endl;
    cout << "Input the length of your rectangle: "; cin >> length;
    cout << "Input the width of your rectangel: "; cin >> width;
    area = width * length;
    perimeter = 2*(length + width);
    cout << "The area is " << area << endl;
    cout << "The perimeter is " << perimeter << endl;
}