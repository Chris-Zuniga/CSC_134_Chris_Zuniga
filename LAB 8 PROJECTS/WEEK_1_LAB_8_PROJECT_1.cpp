//Chris Zuniga
//October 6, 2025
//LAB 8 PROJECT (part 1 of 5)

#include <iostream>
#include <fstream> // For file operations
using namespace std;

int main ()
{
    std::ofstream outFile("Lab1.txt"); // Creating and opening the file

    
    // Writing the specified values to the file
    outFile << "Bourne Identity\n"; 
    outFile << "Star Wars Episode IV\n";
    outFile << "The Hunger Games\n";
    outFile << "Dead Pool\n";
    outFile << "X-Men First Class\n";
    outFile << "Star Wars Episode V\n";
    outFile << "Get Out\n";
    
    // Closing the file
    outFile.close();

    std::cout << "File Lab1.txt created and data written successfully " << std::endl;

return 0;

}
