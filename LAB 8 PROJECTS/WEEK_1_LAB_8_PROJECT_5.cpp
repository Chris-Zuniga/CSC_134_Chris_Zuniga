//Chris Zuniga
//October 6, 2025
//LAB 8 PROJECT (part 5 of 5)
//Assin
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //Declare variables
   ofstream outputFile;
    string Friend1, Friend2, Friend3;

    //Open an output file
    outputFile.open("lab5.txt");

    //Get the name of the user's three best friends

    std::cout << "Enter the name of your first best friend: ";
    std::cout << "Friend #1: ";
    cin >> Friend1;
    std::cout << "Friend #2: ";
    cin >> Friend2;
    std::cout << "Friend #3: ";
    cin >> Friend3;

    //Write the names to the file
    outputFile << Friend1 << std::endl;
    outputFile << Friend2 << std::endl;
    outputFile << Friend3 << std::endl;

    //Close the file
    outputFile.close();


return 0;
}