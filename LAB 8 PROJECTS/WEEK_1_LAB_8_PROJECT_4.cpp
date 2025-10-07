//Chris Zuniga
//October 6, 2025
//LAB 8 PROJECT (part 4 of 5)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int UserInput; //user input variable
    
    //Ask the user for an integer
    std::cout << "Enter an integer: ";
    std::cin >> UserInput;

    //Create and open a text file
    std::ofstream outputFile("lab4.txt");

   
    
    //Loop to Writing numbers to the file
    for (int num1 = 0; num1 < UserInput; ++num1)
    {
        outputFile << num1 << std::endl; //Each number on a new line
    }
    //Close the file
    outputFile.close();

    //Confirmation message
    std::cout << "Done Writing...." << std::endl;

return 0;
}