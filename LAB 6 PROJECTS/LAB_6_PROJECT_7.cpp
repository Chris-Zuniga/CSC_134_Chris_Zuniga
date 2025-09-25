//Chris Zuniga
//Stepember 24, 2025
//LAB 6 PROJECT (part 7 of 8)
// Assigement: Design and write a program that accepts an integer input from a user and display the multiplication table for the entered integer. 
// The multiplication table should display the results from 0 - 12. 
// For example, if the entered integer is 2, then you should show the table and it values between 0 and 12.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int userInput;

    std::cout << "Enter an number to display its multiplacation table: ";
    std::cin >> userInput;

    std::cout << "Multiplication table for " << userInput << ":\n";
    std::cout << "-------------------------\n";
    std::cout << "Multiplier \t\t | Result\n";
    std::cout << "-------------------------\n";



    for (int num = 0; num <= 12; num++)
    {
        int Result = userInput * num;
        std::cout << num << "\t\t\t | " << Result << std::endl;
    }
    std::cout << "-------------------------\n";

    return 0;
}