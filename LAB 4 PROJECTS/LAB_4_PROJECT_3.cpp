//Chris Zuniga
//Stepember 10, 2025
//LAB 4 PROJECT (part 3 of 5)
//This is the LAB 4 PROJECT (part 3)
//Assignment: Design and write a program that accepts an integer value from a user. Use the modulo operator to determine if the number entered is even or odd

#include <iostream>
using namespace std;

int main(){

int number; // To hold an integer value

std::cout << "Enter an integer value and I'll tell you if it\n";
std::cout << " is even or odd: ";
cin >> number; // Get an integer value from the user


//Code 20 will divide the number by 2 and if its even the remainder will be 0
if(number % 2 == 0){
    std::cout << number << " is an even number.\n" << std::endl;
}
else {
    std::cout << number << " is an odd number.\n" << std::endl;




}

return 0;
}