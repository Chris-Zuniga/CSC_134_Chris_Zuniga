//Chris Zuniga
//Stepember 24, 2025
//LAB 6 PROJECT (part 2 of 8)
//This is the LAB 6 PROJECT (part 2)
// Assignment: Design and write a program that accepts user input using cin for an integer value. 
//  After the user enters their value, use a for-loop to iterate over the integer and print out the number of iterations that occur. 
//  So for example, if you enter 5, the program should print 0 through 4 on the console.

#include <iostream>
using namespace std;

int main()
{

    int userInput;

    // Ask the user to enter an integer value
    std::cout << "Enter an integer value: ";
    std::cin >> userInput;

    // For looping from 0 to what did the user enter from the integer value
    for (int i = 0; i < userInput; i++)
    {
        std::cout << "Looping until before it reaches to  #" << userInput << ": #" << i << std::endl;
    }
    
    // For the message that it has stop looping
    std::cout << "Looped stopped" << std::endl;
    










return 0;


}



