/*

Chris Cantor Zuniga
December 8, 2025
FINAL PROJECT C++ CODE


Objective:

Using basic mathematics, we can determine where an object will land when shot out of a cannon. 
In this case, a human cannonball! When objects within a gravatation field are launched, thrown etc. 
they follow a parabolic pattern(e.g. see image below). 
This is known as a parabola and can easily be solved using the quadratic equation. 
Using the equation below, determine the distance the human cannonball will travel when he hits the ground. 
Assume all distances are in meters. 
The quadratic equation generates two results, one of the results will be negative and you have to throw this away, as it is not meaningful. 
When done, upload your C++ program and graph to Moodle.

Quadratic Equation: 

x = (-b ± √(b² - 4ac)) / 2a

Default Values:

let a = −0.01568

let b = 1.00000

let c = 1.5

and make sure it can make a graph of the trajectory as well.

for example:

19 |                                                                   
    |                                                                   
 17 |                                 *                                 
    |                          ******* *******                          
 15 |                      ****               ****                      
    |                    **                       **                    
 13 |                  **                           **                  
    |                **                               **                
 11 |              **                                   **              
    |             *                                       *             
  9 |           **                                         **           
    |          *                                             *          
  7 |         *                                               *         
    |       **                                                 *        
  5 |      *                                                    **      
    |     *                                                       *     
  3 |    *                                                         *    
    |   *                                                           *   
  1 |  *                                                             *  
    | *                                                               * 
  0 | -----------------------------------------------------------------*
     |    |    |    |    |    |    |    |    |    |    |    |    |    |
         0    5   10   15   20   25   30   35   40   45   50   55   60   65




*/

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

     double a = -0.01568; //parabola coefficient
     double b = 1.00000;  //linear coefficient
     double c = 1.5; //constant term


     std::cout << "Calculating the distance a human cannonball will travel when launched from a cannon...\n" << std::endl;
     std::cout << "Using the quadratic equation: x = (-b ± √(b² - 4ac)) / 2a\n" << std::endl;
     std::cout << "Given values:\n a = " << a << "\n b = " << b << "\n c = " << c << std::endl;

    // Calculate discriminant  
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        std::cout << "No real solutions exist." << std::endl;
        return 1;
}
    // Calculate both solutions
    double sqrtDiscriminant = sqrt(discriminant);
    double X1 = (-b + sqrtDiscriminant) / (2 * a);
    double X2 = (-b - sqrtDiscriminant) / (2 * a);

    std::cout << "\nThe two possible solutions for x are:\n";
    std::cout << "x1 = " << X1 << "\n";
    std::cout << "x2 = " << X2 << "\n";

    // Determine the landing point (the positive solution)
    double landingPoint;
    if (X1 > 0) {
        landingPoint = X1;
    } else {
        landingPoint = X2;
    }

    std::cout << "\nThe human cannonball will land at approximately x = " << landingPoint << " meters.\n" << std::endl;

    //GRAPHING THE TRAJECTORY
    // Collect trajectory points until y <= 0


    vector<double> Y_Axis;
    int maxX = static_cast<int>(landingPoint);
    for (int x = 0; ; x++)//reason why no condition here is because we will break when y <=0
    {
        double y = a * x * x + b * x + c;
        if(y <= 0) break;   // stop when hitting ground
        Y_Axis.push_back(y);

    }
     
    // Find max height
    double maxY = 0;
    for (double Value : Y_Axis)
    {
        if (Value > maxY) maxY = Value;//finding maximum height
    }

    // Graph dimensions
    int graphHeight = 20;
    double scaleY = maxY / (graphHeight - 2);

    std::cout << "Trajectory Graph:\n" << std::endl;

    // Print graph row by row (top to bottom)
    for (int row = graphHeight; row >= 0; row--)
    {
        if( row % 2 == 0)
        {
            std::cout << setw(3) << static_cast<int>(row * scaleY) << " | ";
            

        } else 
        {
            std::cout << "    | ";
        }

    

    for (int x = 0; x <= maxX; x++)
    {
        int yRow = static_cast<int>(Y_Axis[x] / scaleY);
        if (yRow == row)
        {
            std::cout << "*";   // plot point
        }
        else if (row == 0)
        {
            std::cout << "-";   // ground line
        }
        else
        {
            std::cout << " ";   // empty space
        }
    }
    std::cout << std::endl;

}

//Printing the X-Axis label

std::cout << "   ";
for (int x = 0; x <= maxX; x++) {
        if (x % 5 == 0) cout << "|";
        else cout << " ";
    }
    cout << endl;

    cout << "     ";
    for (int x = 0; x <= maxX; x++) {
        if (x % 5 == 0) cout << setw(5) << x;
    }
    cout << endl;

    cout << "\nLanding point at x ≈ " << maxX << " meters.\n";    
return 0;
}