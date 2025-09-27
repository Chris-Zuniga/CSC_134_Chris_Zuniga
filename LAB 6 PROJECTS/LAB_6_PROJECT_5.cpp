//Chris Zuniga
//Stepember 24, 2025
//LAB 6 PROJECT (part 5 of 8)
// Assignment: Design and write a program that sets an integer variable named minNum to the value of 0 and a variable named maxNum to 100. 
// >Implement a for-loop to print each number and its square to a simple table on the console. 
// >An example of the table format should look like the following, but with all 100 numbers and squares populated in the table:
// Number    Square
//------------------
// 2       4


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Variable Declaration
    int minNumber = 0;
    int maxNumber = 100;

    // Output
    std::cout << "Number \t\t|  Number Square\n";
    std::cout << "------------------------------\n";

    for (int i = minNumber; i <= maxNumber; i++)
    {
        // Output each number and its square
        std::cout << i << "\t\t|   " << (i * i) << std::endl;

    }




    return 0;
}