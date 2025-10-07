//Chris Zuniga
//October 7, 2025
//LAB 8 PROJECT (part 1 of 2)


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile; // Create an input file stream object
    string names;

    inFile.open("/Users/chriszuniga/GITHUB-CSC-134/CSC_134_Chris_Zuniga-1/LAB 8 PROJECTS/friends.txt"); // Open the file

    
    // Read and print each line from the file

    std::cout << "Friends List:" << std::endl;

    while(getline(inFile, names))
    {
        std::cout << names << std::endl; // Print each name to the console
    }
    
    inFile.close(); // Close the file

    return 0;
}