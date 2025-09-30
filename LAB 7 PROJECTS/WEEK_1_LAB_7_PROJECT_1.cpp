//Chris Zuniga
//Stepember 29, 2025
//LAB 7 PROJECT (part 1 of 4)
// Assignment : Create a program that prints a multiplication table for numbers 1 to 10 using nested for loops. 

#include <iostream>
using namespace std;

int main ()
{
    //The Multiplication Table Header
    std::cout << "Multiplication Table (1 to 10):\n\n";

    //  loops to generate the multiplication table (the outer layer loop)
    for(int num1 = 1; num1 <= 10; num1++)
        {
            for (int num2 = 1; num2 <= 10; num2++) // the inner layer loop
            {
                std::cout << "\t"<< num1 * num2; // Printing the numbers

            }
            std::cout << std::endl; // New line, New number
        }

    return 0;
}