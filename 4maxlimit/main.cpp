#include <iostream>
#include <limits>

using namespace std;


int main(){
    cout << "Check the upper and lower limits of an integer:\n" <<
    "-----------------------------------------------------\n";
    cout << "The max limit of int data type :" << numeric_limits<int>::max() << endl;
    cout << "The min limit of int data type :" << numeric_limits<int>::min() << endl;

    cout << "The max limit of unsigned int data type :" << numeric_limits<unsigned int>::max() << endl;
    cout << "The min limit of unsigned int data type :" << numeric_limits<unsigned int>::min() << endl;

    cout << "The max limit of long long data type :" << numeric_limits<long long>::max() << endl;
    cout << "The min limit of long long data type :" << numeric_limits<long long>::min() << endl;

    cout << "The max limit of unsigned long long data type :" << numeric_limits<unsigned long long>::max() << endl;
    cout << "The Bits contain in char data type : " << numeric_limits<char>::digits << endl;

    cout << "The max limit of char data type :" << static_cast<int>(numeric_limits<char>::max()) << endl;
    cout << "The min limit of char data type :" << static_cast<int>(numeric_limits<char>::min()) << endl;

    cout << "The max limit of signed char data type :" << static_cast<int>(numeric_limits<signed char>::max()) << endl;
    cout << "The min limit of signed char data type :" << static_cast<int>(numeric_limits<signed char>::min()) << endl;

    cout << "The max limit of unsigned char data type :" << static_cast<int>(numeric_limits<unsigned char>::max()) << endl;

    cout << "The max limit of short data type :" << numeric_limits<short>::max() << endl;
    cout << "The min limit of short data type :" << numeric_limits<short>::min() << endl;

    cout << "The max limit of unsigned short data type :" << numeric_limits<unsigned short>::max() << endl;
}