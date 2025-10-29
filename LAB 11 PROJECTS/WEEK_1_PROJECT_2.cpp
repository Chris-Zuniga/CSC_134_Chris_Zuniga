//Chris Zuniga
//October 27, 2025
//LAB 8 PROJECT ((WEEK 1)part 2 of 4)

#include <iostream>
using namespace std;

int main()
{
    // Declare constants and variables
    const int SIZE = 5; // Size of the array
    int numbers[SIZE] = {10, 20, 30, 40, 50}; // Array initialized with 5 integer values
    int sum = 0; // Variable to hold the sum of the values

    // Calculate the sum of the array elements
    for (int numIndex = 0; numIndex < SIZE; ++numIndex)
    {
        sum += numbers[numIndex]; // Add each number to the sum
    }

    // Print the total sum to the console
    std::cout << "The total sum of the array values is: " << sum << std::endl;

    return 0;
}