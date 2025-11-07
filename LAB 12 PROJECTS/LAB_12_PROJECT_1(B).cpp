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

    for(int X = 0; X <= 4; ++X) // Filling the array with y_values
    {
        Y_values[X]= 2 * X + 3; // // Calculate y using the equation y = 2x + 3
    }
   
    // Drawing the graph from Y = 15 down to Y = 0

    for (int Y = 15; Y >= 0; --Y) 
    {
        std::cout << Y << "|";


        // Using the Range Based-loop, Checking if the Y matches the points

        bool X_marks = false; // X_marks to track is plotted or not

        for(int val: Y_values) 
        {
            if(val == Y)
            {
                int X_position = (val - 3) / 2; // An Reverse problem, Solving X from Y --> Y =2x +3 --> X = (Y - 3) / 2

                //Printing the spaces to align the "X" Horziontally based on the X_position
                std::cout << string(X_position * 4, ' ') << "X"; 

                // X_marks that a point was plotted
                X_marks = true; 
                break;
            }

        }

        // If no X_marks was plotted, then Move on to the next line
        if (!X_marks) std::cout << "";

        // Moving the next line from each y-row
        std::cout << std::endl;

    }



  // Drawing the X-axis
    std::cout << "   -------------------------------------------->" << std::endl;
    std::cout << "  ";
   
    // The X-axis number's from 0 to 15
    for(int X = 0; X <= 15; ++X)
    {
        std::cout << X << " "; //Printing each x-axis label
    }

    return 0;

}