//Chris Zuniga
//October 27, 2025
//LAB 8 PROJECT ((WEEK 1)part 1 of 4)

#include <iostream>
using namespace std;

int main()
{
    // Declare constants and variables
    const int SIZE = 10; // Size of the array
    int grades[SIZE];   // Array to hold the grades
    int sum = 0;      // Variable to hold the sum of grades
    double average;  // Variable to hold the average of grades

    // Prompt user to enter grades
    std::cout << "Enter " << SIZE << " grades (make sure they are integers):" << std::endl;

    // Read grades from user and calculate the sum  
    for (int gradeIndex = 0; gradeIndex < SIZE; ++gradeIndex)
    {
        // Prompt for each grade
        std::cout << "Grade " << (gradeIndex + 1) << ": ";
        // Read the grade
        std::cin >> grades[gradeIndex];
        sum += grades[gradeIndex]; // Add the grade to the sum
    }

    // Calculate the average
    average = static_cast<double>(sum) / SIZE;

    // Print the average to the console
    std::cout << "The average of the entered grades is: " << average << std::endl;

    return 0;
}

