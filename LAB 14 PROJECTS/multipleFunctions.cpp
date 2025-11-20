//Chris Zuniga
//November 19, 2025
// LAB (5 of 5)

#include <iostream>
using namespace std;

//Function before main

void  squareNumber(int num)
{

        std::cout << "The square of " << num << " is " << num * num << ". " << std::endl;

}

//Making the void averageVaules, printing 3 intergers as parameters and printing the average

void averageVaules(int num1, int num2, int num3)
{

     double avg = (num1 + num2 + num3 ) / 3.0;
     std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is : " << avg << std::endl;

}
//Calling it twoFunctions to combine both squareNumber(int num) and averageVaules(int num1, int num2, int num3)
void TwoFunctions()
{

    //Both Variables for the user to prompt
     int vaule;
     int A, B, C;

    //Prompt the user to insert the value and call squareNumber()
      std::cout << "Enter an integer value: " << std::endl;
      std::cin >> vaule;
      squareNumber(vaule);

        //Prompt the user to insert 3 values and call averageVaules()
      std::cout << "Enter 3 interger vaules separated by spaces: ";
      std::cin >> A >> B >> C;
     averageVaules(A, B, C);
    
}


int main()
{

    //Call TwoFunctions(), which in turn calls both squareNumber() and averageVaules()
    TwoFunctions();

    return 0;

}  
