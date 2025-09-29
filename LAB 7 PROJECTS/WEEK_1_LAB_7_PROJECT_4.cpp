//Chris Zuniga
//Stepember 29, 2025
//LAB 7 PROJECT (part 4 of 4)
// Assignment :Write a program that prints a chessboard pattern of asterisks and spaces using nested for-loops. 
// For white-spaces use a space and for black-spaces use and asterisk. 
//You should prompt the user for the size of the chess board with a single integer value. 


#include <iostream>
using namespace std;

int main()
{

    int ChessSize;
    std::cout << "Enter the Size of the Chess Board: ";
    std::cin >> ChessSize;

    // Loop for the number of rows(Outer loop)
    for (int WhiteSpace = 1; WhiteSpace <= ChessSize; WhiteSpace++)
    {
        for (int BlackSpace = 1; BlackSpace <= ChessSize; BlackSpace++) //The Inner Loop
        {
            if ((WhiteSpace + BlackSpace) % 2 == 0) // Condition for the chess pattern
                std::cout << "* "; //Printing the Stars
            else
                std::cout << "  "; //Printing the Spaces
        }
        std::cout << std::endl; // New Line, New Row
    }

    return 0;
}




