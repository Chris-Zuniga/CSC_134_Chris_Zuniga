//Chris Zuniga
//Stepember 23, 2025
//LAB 6 PROJECT (part 1 of 8)
//This is the LAB 6 PROJECT (part 1)
//Assignment: Design and write a program the implements a simple for-loop starting at 0 and terminating at 10. 
// > Print the loop counter(index) using cout each iteration through the loop.


#include <iostream>
using namespace std;

int main()
{
    //for loop starting at 0 and terminating at 10
    for (int i = 0; i <= 10; i++)
    {
        std::cout <<"Looping until reaches #10: #"<< i << std::endl;
    }

    // For the message that it has stop looping
    std::cout << "Looped stopped" << std::endl;


    

    return 0;


}
