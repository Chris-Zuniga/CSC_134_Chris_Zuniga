//Chris Zuniga
//Stepember 3, 2025
//LAB 2 PROJECT (part 1(B))
//This is the LAB 2 PROJECT (part 1(B))
//Assignment: Design and write a program that calculates the Force, F given the following

#include <iostream>
using namespace std;

int main() {

double Mass = 10.0 ; // Kg
double Acceleration = 9.81; //M/s^2
double Force;

Force = Mass * Acceleration;

std::cout << "The Force(F) = " << Mass << " Kg Times by " << Acceleration << " M/s^2 = " << Force << " Newtons." << std::endl;

return 0;


}
