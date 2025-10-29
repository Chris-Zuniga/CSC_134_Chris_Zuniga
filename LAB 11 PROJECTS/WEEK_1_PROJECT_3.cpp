//Chris Zuniga
//October 27, 2025
//LAB 8 PROJECT ((WEEK 1)part 3 of 4)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
        // Declare constants and variables
    const int SIZE = 5; // Size of the array
    double sales[SIZE]; // Array to hold the sales amounts
    double sum = 0.0;   // Variable to hold the sum of sales
    int Count = 0;    // Count for the array

    
     // Creating an input file stream object
    ifstream inputFile;
    inputFile.open("/Users/chriszuniga/GITHUB-CSC-134/CSC_134_Chris_Zuniga/LAB 11 PROJECTS/sales.txt"); 


    // Read sales from the file into the array
    while (Count < SIZE && inputFile >> sales[Count])
   {
    Count++;
   }


   inputFile.close(); // Close the file after reading


    // Calculate the sum of the sales
    for (int numIndex = 0; numIndex < Count; ++numIndex)
    {
        sum += sales[numIndex]; // Add each sale to the sum
    }

    // Print the total sales to the console
    std::cout << "The total sales amount is: $" << sum << std::endl;

return 0;
}