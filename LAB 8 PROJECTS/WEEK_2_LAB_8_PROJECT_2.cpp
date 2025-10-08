//Chris Zuniga
//October 7, 2025
//LAB 8 PROJECT (part 2 of 2)


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile; // Create an input file stream object
    int number;
    int sumTotal = 0;

    inFile.open("/Users/chriszuniga/Downloads/numbers.txt"); // Open the file

    // Read and sum the numbers from the file
    while(inFile >> number)
    {
        sumTotal += number; // Add the number to the sum
    }

    // Close the file
    inFile.close();

    // Print the total sum to the console
    std::cout << "The total sum is: " << sumTotal << std::endl;

    return 0;
}
