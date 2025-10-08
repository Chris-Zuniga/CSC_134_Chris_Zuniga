//Chris Zuniga
//October 6, 2025
//LAB 8 PROJECT (part 3 of 5)


#include <iostream>
#include <fstream> // For file operations

using namespace std;

int main()
{
    ofstream outputFile; // Creating an output file stream object

     outputFile.open("Lab3.txt"); // Opening the input file

    

       // Writing the specified values to the file
    outputFile << "Bourne Identity"; 
    outputFile << "Star Wars Episode IV";
    outputFile << "The Hunger Games";
    outputFile << "Dead Pool";
    outputFile << "X-Men First Class";
    outputFile << "Star Wars Episode V";
    outputFile << "Get Out";
    
    // Closing the file
    outputFile.close();

    std::cout << "File Lab3.txt created and data written successfully " << std::endl;









return 0;

}