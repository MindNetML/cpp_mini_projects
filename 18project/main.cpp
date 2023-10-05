#include <iostream>

/* Calculator
    - needs to add
    - need to subtract
    - needs to multiply
    - needs to divide

All operations will be held in seperate cpp files and called using header files

*/

int add(int x, int y); // forward calling addition

int subtract(int x, int y); // forward calling subtraction

int multiply(int x, int y); // forward calling multiplication

int divide(int x, int y); // forward calling subtraction


int main(int, char**){
    // variables to hold numbers
    int num_add1{};  // variable to hold user entered number
    int num_add2{};  // variable to hold user entered number
    int num_sub1{};  // variable to hold user entered number
    int num_sub2{};  // variable to hold user entered number
    int num_mult1{};  // variable to hold user entered number
    int num_mult2{};  // variable to hold user entered number
    int num_div1{};  // variable to hold user entered number
    int num_div2{};  // variable to hold user entered number

    std::cout << "Enter first number to add: "; // introductory text asking to enter number 
    std::cin >> num_add1; // prompt to send user entered variable to num_add2 variable
    std::cout << "Enter second number to add: "; 
    std::cin >> num_add2; // prompt to send user entered variable to num_add2 variable

    std::cout << "Enter first number to subtract: "; // introductory text asking to enter number 
    std::cin >> num_sub1; 
    std::cout << "Enter second number to subtract: "; 
    std::cin >> num_sub2;

    std::cout << "Enter first number to multiply: "; // introductory text asking to enter number 
    std::cin >> num_mult1;
    std::cout << "Enter second number to multiply: "; 
    std::cin >> num_mult2;

    std::cout << "Enter first number to divide: ";
    std::cin >> num_div1;
    std::cout << "Enter second number to divide: "; 
    std::cin >> num_div2;

    std::cout << "Adding " << num_add1 << " + " << num_add2 << " = " << add(num_add1, num_add2) << std::endl;
    std::cout << "Subtracting " << num_sub1 << " - " << num_sub2 << " = " << subtract(num_sub1, num_sub2) << std::endl;
    std::cout << "Multiplying " << num_mult1 << " x " << num_mult2 << " = " << multiply(num_mult1, num_mult2) << std::endl;
    std::cout << "Dividing " << num_div1 << " / " << num_div2 << " = " << divide(num_div1, num_div2) << std::endl;
}
