//Chris Zuniga
//November 19, 2025
// LAB (4 of 5)

#include <iostream>
#include <vector>

using namespace std;

// Using the interger Num and loops up from 1 to Num
void loop(int Num)
{
    for(int Lit = 1; Lit <= Num; Lit++){

    std::cout << "Iteration " << Lit << std::endl;
    }
}

int main()
{
    int Values;

    std::cout << " Enter an interger that is less than 1000: ";
    cin >> Values;

    //In this code, the value must be less than 1000 and a positive number
    if(Values < 1000 && Values > 0)
    {
         // Call the loop function with user value
        loop(Values);
    } else {
        //Else it will send out this message
        std::cout << "INVAILD INPUT!!! \n" << std::endl;
        std::cout << "Please use enter an positive interger that is less than 1000. " << std::endl;
    }

    return 0;
}
