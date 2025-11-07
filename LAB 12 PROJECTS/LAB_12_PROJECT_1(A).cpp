//Chris Zuniga
//November 3, 2025
//LAB 12 PROJECT (PART 1 OF 1)



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int y_values[16]; // Array to hold y values for x from 0 to 15

    for (int X = 0; X <= 15; ++X) // Filling the array with y_values
    {
        y_values[X] = 2 * X + 3; // Calculate y using the equation y = 2x + 3
    }

    // Plotting the graph
    for (int Y = 15; Y >= 0; --Y)
    {
        std::cout << Y << "|"; // Printing the y-axis label

        //Looping Each X-vaules, checking to see if the matches the y_values[X]
        for (int X = 0; X <=15; ++X)
        {

            if (y_values[X] == Y) 
            {
                std::cout << " X"; // Printing "X" 
            }
            else
            {
                std::cout << "  "; // Printing and empty space
            }
        }
           std::cout << std::endl; // Moving the next line from each y-row

    }



    // Drawing the X-axis
   std::cout << "   -------------------------------------------->" << std::endl;
 std::cout << "    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15" << std::endl;



    return 0;

}