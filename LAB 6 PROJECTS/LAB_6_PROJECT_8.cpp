//Chris Zuniga
//Stepember 25, 2025
//LAB 6 PROJECT (part 8 of 8)
//Design and write a program that asks the user how many times they would like roll a single die(integer value). 
//  After the user enters the number of rolls, then randomly choose a number between 1 and 6 and use a for-loop to simulate rolling a die. 
//  Hint: use the rand() method/function


#include <iostream>
#include <cstdlib> // For rand()
using namespace std;

int main()
{

    int NumofRolls;

    std::cout << "Enter the number of times you would like to roll a single die: ";
    std::cin >> NumofRolls;

    std::cout << "Rolling the dice " << NumofRolls << " times:\n";
    
     for (int roll = 1; roll <= NumofRolls; roll++)
    {
        int DieRoll = rand() % 6 + 1; // Random number between 1 and 6
        std::cout << "Dice " << roll << ": " << DieRoll << std::endl;
    }

    return 0;
}

