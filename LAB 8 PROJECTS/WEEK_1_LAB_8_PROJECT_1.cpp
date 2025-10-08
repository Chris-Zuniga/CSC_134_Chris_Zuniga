//Chris Zuniga
//October 6, 2025
//LAB 8 PROJECT (part 1 of 5)

#include <iostream>
#include <fstream> // For file operations
using namespace std;

int main ()
{
    ofstream outputFile; // Creating an output file stream object
     outputFile.open("Lab1.txt"); // Creating and opening the file

    
    // Writing the specified values to the file
    outputFile << "Bourne Identity\n"; 
    outputFile << "Star Wars Episode IV\n";
    outputFile << "The Hunger Games\n";
    outputFile << "Dead Pool\n";
    outputFile << "X-Men First Class\n";
    outputFile << "Star Wars Episode V\n";
    outputFile << "Get Out\n";
    
    // Closing the file
    outputFile.close();

    std::cout << "File Lab1.txt created and data written successfully " << std::endl;

return 0;

}
