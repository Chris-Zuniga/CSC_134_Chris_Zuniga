//Chris Zuniga
//Stepember 3, 2025
//LAB 2 PROJECT (part 1(B))
//This is the LAB 2 PROJECT (part 1(B))
//Assignment: Using the same equation x = v * t calculate the velocity, v,  given the following:

#include <iostream>

int main() {

    double velocity;
    double time = 4.0; // Hours
    double distance = 400.0; // Miles

    velocity = distance / time;

    std::cout << "The Veolocity is " << velocity << " Miles Per Hour." << std::endl;

return 0;
}
