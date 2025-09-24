//Chris Zuniga
//Stepember 15, 2025
//LAB 5 PROJECT (part 1 of 5)
//This is the LAB 5 PROJECT (part 1)
//Assignment:Design and write a program that calculates the angle(theta) of a right triangle
// > length of triangle x is 3 units
// > height of triangle y is 4 units
// > The angle theta is adjacent to leg x
// > use the equation 𝑥2+𝑦2=𝑐2
// > let c equal the hypotenuse
// > Note: use the atan2() function, to convert from radians to degrees use 180/𝜋
// > research the atan2() function and how it can be used in your program.
// > If the angle(theta) is equals 53.13° then print "This is a 3-4-5 triangle", otherwise print "This is NOT a 3-4-5 triangle".

#include <iostream>
#include <cmath> 
#include <iomanip> 

using namespace std;

int main() {

    double length = 3.0; // length of triangle (adjacent side)
    double height = 4.0; // height of triangle (opposite side)

    // Calculate the hypotenuse using the Pythagorean theorem
    double hypotenuse = sqrt((length * length) + (height * height));

    // Calculate the angle theta in radians using atan2
    double Theta_radains = atan2(height, length);

    // Convert radians to degrees
    double Theta_degrees = Theta_radains * (180.0 / M_PI);

    // Set precision for output
    std::cout << fixed << setprecision(2);
    std::cout << "The angle theta is: " << Theta_degrees << " degrees" << std::endl;

    // Check if the angle is approximately 53.13 degrees
    if (abs(Theta_degrees - 53.13) < 0.01) {

        std::cout << "This is a 3-4-5 triangle." << std::endl;
    } else {
        std::cout << "This is NOT a 3-4-5 triangle." << std::endl;
    }

    return 0;

}