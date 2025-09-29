//Chris Zuniga
//Stepember 29, 2025
//LAB 7 PROJECT (part 3 of 4)
// Assignment :  Create a program that prints a square pattern of asterisks using nested for-loops. 
// The side length of the square should be specified by the user.

#include <iostream>
using namespace std;

int main()

{
    int StarLength;
    std::cout << "Enter the Length of the Side of the Square: ";
    std::cin >> StarLength;

    // Loop for the number of rows(Outer loop)
    for (int num1 = 1; num1 <= StarLength; num1++)
    {
        for (int num2 = 1; num2 <= StarLength; num2++) //The Inner Loop
        {
            std::cout << "* "; //Printing the Stars
        }
        std::cout << std::endl; // New Line, New Row

}


    return 0;
}
