#include <string>

using namespace std;

string add(int x, int y){

    return "The sum of your numbers " + to_string(x) + " and your string " + to_string(y) + " is " + to_string(x + y);
}