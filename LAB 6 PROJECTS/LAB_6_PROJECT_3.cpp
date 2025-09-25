//Chris Zuniga
//Stepember 24, 2025
//LAB 6 PROJECT (part 3 of 8)
//This is the LAB 6 PROJECT (part 3)
// Assignment: Design and write a program that uses an accumulator to count the number of iterations in a for-loop. 
//  You should initialize your accumulator to zero then set up a for-loop to loop a maximum of 100 times and add 1 to the accumulator each iteration through the loop. 
//  When the loop is complete you should print our the following using cout -> "The accumulator value is: xxx"


#include <iostream>
using namespace std;

int main()
{

    int accumulator = 0; //Accumulator initial is zero

    // Looping a maximum 100 times

    for (int number = 0; number < 100; number++)
    {
        accumulator += 1; // Add 1 to the accumulater each iteration through the loop

    }

    // Print out the accumulator value
    std::cout << "The accumulator value is: " << accumulator << std::endl;

    return 0;

}