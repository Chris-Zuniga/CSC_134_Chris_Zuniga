//Chris Zuniga
//Stepember 3, 2025
//LAB 2 PROJECT (part 1(A))
//This is the LAB 2 PROJECT (part 1(A))
//Assignment: Design and write a program that calculates the distance travelled (x) given the following:


#include <iostream>
using namespace std;

int main() {

double distance;
double velocity = 80.0; // Miles Per Hour
double time = 2.0; // Hours

distance = velocity * time;

std::cout << "The distance travelled is " << distance << " miles." << std::endl;

return 0;

}