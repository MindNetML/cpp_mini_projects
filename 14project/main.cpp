#include <iostream>

using namespace std;

int getvalue(){
    cout << "Enter an integer: ";
    int input{};
    cin >> input;
    return input;
}

void givevalue(int num){
    cout << num << " Doubled is: " << num * 2 << endl;
}

int main(){
    givevalue(getvalue());
}