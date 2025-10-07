//Chris Zuniga
//October 6, 2025
//LAB 8 PROJECT (part 2 of 5)

#include <iostream>
#include <fstream> // For file operations
#include <iomanip>

using namespace std;

int main ()
{
    std::ofstream outFile("Lab2.txt"); // Creating and opening the file

   

    // Writing the specified values to the file with formatting
    outFile << "********************************\n";
    outFile << "\t\tShopping Cart\n";
    outFile << "********************************\n";
    outFile << "Product Code|\tQty|\tPrice\n";
    outFile << "780|\t\t\t8|\t\t$1.50\n";
    outFile << "\t\t\tTotal: $12.00\n";

    // Closing the file
    outFile.close();

    std::cout << "File Lab2.txt created and data written successfully " << std::endl;

    return 0;
}