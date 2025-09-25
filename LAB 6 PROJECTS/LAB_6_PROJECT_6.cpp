//Chris Zuniga
//Stepember 24, 2025
//LAB 6 PROJECT (part 6 of 8)
//Design and write a program that initializes two variables named sumOp and adder, let sumOp equal 0 and adder equal 10. 
//  Create a for-loop that loops 50 times and sums the loop counter(index) and the adder variable. 
//  Each iteration through the loop, you should print the sumOp variable that holds the value your summed up.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int sumOp = 0;
    int adder = 10;

    for (int num = 0; num < 50; num++)
    {
        sumOp = num + adder;
        std::cout << "Iteration " << num << ": Sum = " << sumOp << std::endl;

    }

    std::cout << "Final sum after 50 iterations: " << sumOp << std::endl;

    return 0;
}
