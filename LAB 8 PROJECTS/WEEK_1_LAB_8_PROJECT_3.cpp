//Chris Zuniga
//October 6, 2025
//LAB 8 PROJECT (part 3 of 5)


#include <iostream>
#include <fstream> // For file operations

using namespace std;

int main()
{
    ofstream outFile("Lab3.txt"); // Opening the input file

    

       // Writing the specified values to the file
    outFile << "Bourne Identity"; 
    outFile << "Star Wars Episode IV";
    outFile << "The Hunger Games";
    outFile << "Dead Pool";
    outFile << "X-Men First Class";
    outFile << "Star Wars Episode V";
    outFile << "Get Out";
    
    // Closing the file
    outFile.close();

    std::cout << "File Lab3.txt created and data written successfully " << std::endl;









return 0;

}