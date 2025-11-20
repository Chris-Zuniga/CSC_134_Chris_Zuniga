//Chris Zuniga
//November 19, 2025
// LAB (3 of 5)


#include <iostream>
using namespace std;

//Making the void averageVaules, printing 3 intergers as parameters and printing the average
void averageVaules(int num1, int num2, int num3)
{
    double avg = (num1 + num2 + num3 ) / 3.0;


    std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is : " << avg << std::endl;

}

int main()
{
    // Variables for the user to input
    int A, B, C;

    
    std::cout << "Enter 3 interger vaules: ";
    std::cin >> A >> B >> C;

    //Calling the void with the user values
    averageVaules(A, B, C);

    return 0;

}
