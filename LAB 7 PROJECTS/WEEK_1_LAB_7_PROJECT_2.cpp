//Chris Zuniga
//Stepember 29, 2025
//LAB 7 PROJECT (part 2 of 4)
// Assignment : Write a program that prints a right triangle of stars using nested-for loops. 
// The number of rows should be specified by the user.

#include <iostream>
using namespace std;

int main (){

    int rows;

    std::cout <<"Enter the Number of Rows for the * Triangle: ";
    std::cin >> rows;

    // Loop for the number of rows(Outer loop)
    for (int num1 = 1; num1 <= rows; num1++)
    {
        for (int num2 = 1; num2 <= num1; num2++)//The Inner Loop
        {
            std::cout << "* "; //Printing the Stars
        }
        std::cout << std::endl; // New Line, New Row
    }

    return 0;
}

