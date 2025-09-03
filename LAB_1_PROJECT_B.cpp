//Chris Zuniga
//August 31, 2025
//LAB 1 PROJECT (part 2)
//This is the LAB 1 PROJECT (part 2)
//Assignment: Design & write a program that divides a number by 0 and review the error.


#include <iostream>
using namespace std;

int main() {

double numerator = 10.0;
double denominator = 0.0;
double result;

result = numerator / denominator;

std::cout << "The result of " << numerator << " divided by " << denominator << " is " << result << std::endl;

return 0;


}


