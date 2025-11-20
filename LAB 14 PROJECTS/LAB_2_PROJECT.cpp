//Chris Zuniga
//November 19, 2025
// LAB (2 of 5)


#include <iostream>
using namespace std;


//Function before main
void  squareNumber(int num)
{
        std::cout << "The square of " << num << " is " << num * num << ". " << std::endl;

}


int main()
{
    int vaule;

    std::cout << "Enter an integer value: " << std::endl;
    std::cin >> vaule;

    squareNumber(vaule); // calling the function


    return 0;
}