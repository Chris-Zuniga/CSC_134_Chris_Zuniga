//Chris Zuniga
//November 3, 2025
//LAB 12 PROJECT (PART 1 OF 1)



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    // Calculating the Y-Values from X = 0 to 4, by using the Y= 2x + 3

    int Y_values[5]; // Array
    for(int X = 0; X <= 4; ++X)
    {
        Y_values[X]= 2 * X + 3; // Y= 2X + 3
    }
   
    // Drawing the graph from Y = 15 down to Y = 0

    for (int Y = 15; Y >= 0; --Y)
    {
        std::cout << Y << "|";


        // Using the Range Based-loop, Checking if the Y matches the points
        bool X_marks = false;

        for(int val: Y_values)
        {
            if(val == Y)
            {
                int X_position = (val - 3) / 2; // An Reverse problem, Solving X from Y
                std::cout << string(X_position * 4, ' ') << "X";
                X_marks = true;
                break;
            }

        }

        if (!X_marks) std::cout << "";
        std::cout << std::endl;

    }


    //Drawing the X-axis

  // Drawing the X-axis
    std::cout << "   -------------------------------------------->" << std::endl;
    std::cout << "  ";
   
    for(int X = 0; X <= 15; ++X)
    {
        std::cout << X << " ";
    }

    return 0;

}