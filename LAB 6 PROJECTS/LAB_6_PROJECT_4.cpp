//Chris Zuniga
//Stepember 24, 2025
//LAB 5 PROJECT (part 4 of 8)
// Assignment :Design and write a program that: 
// >loops backward from 100 to 1 using a for-loop and print: 
//  >each iteration of the loop to the console using cout

#include <iostream>
using namespace std;

int main()
{
    //Looping backwards from 100 to 1 using a for-loop
    for (int i = 100; i>= 1; i--)
    {
        std::cout<<"Going to 100 to 1 Literation # " << i << std::endl;
    }

    std::cout << "End of Literation Program. \n";

    return 0;
}