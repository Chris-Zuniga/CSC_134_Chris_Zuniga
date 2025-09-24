//Chris Zuniga
//Stepember 8, 2025
//LAB 4 PROJECT (part 1 of 5)
//This is the LAB 4 PROJECT (part 1)
//Assignment: Design and write a program that allows a user to enter 3 integer values and calculate the average of the values entered. You should print the resulting value as "The average of your three numbers is: YOUR_RESULT_HERE"

#include <iostream>
#include <cmath>
using namespace std;

int main() {

int num1, num2, num3;

float average;

// Put in the 3 integer values
cout << "Enter your First Number: ";
cin >> num1;
cout << "Enter your Second Number: ";
cin >> num2;
cout << "Enter your Third Number: ";
cin >> num3;

average = (num1 + num2 + num3) / 3.0;

std::cout << "The average of the three numbers is: " << average << std::endl;

return 0;








}