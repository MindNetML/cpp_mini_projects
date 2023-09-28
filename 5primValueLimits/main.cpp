#include <iostream>

using namespace std;

int main() {
    string name; // don't define name variable so you can use cin with it
    int age; // same as above but for age

    cout << "Enter name: "; cin >> name;
    cout << "Enter age: "; cin >> age;

    cout << "My name is " << name << " and I am " << age << " years old!" << endl;

}
