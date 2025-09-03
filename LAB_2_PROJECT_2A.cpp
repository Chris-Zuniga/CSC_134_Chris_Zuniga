//Chris Zuniga
//Stepember 3, 2025
//LAB 2 PROJECT (part 1(B))
//This is the LAB 2 PROJECT (part 1(B))
//Assignment: Design and write a program that calculates the Voltage, v given the following:


#include <iostream>
using namespace std;

int main() {

double Current = 10 ; // Amps
double Resistance = 2; //Ohms
double Voltage;

Voltage = Current * Resistance;

std::cout << "The Voltage(V) is equal by " << Current << " Amps * " << Resistance << " Ohms = " << Voltage << " Volts." << std::endl;

return 0;



}

