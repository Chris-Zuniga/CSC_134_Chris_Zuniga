//Chris Zuniga
//August 31, 2025
//LAB 1 PROJECT (part 2)
//This is the LAB 1 PROJECT (part 2)
//Assignment: Design and write a program that accomplishes the following:  The average July high temperature is 85 degrees Fahrenheit in New York City, 88 degrees Fahrenheit in Denver, and 106 degrees Fahrenheit in Phoenix. Write a program that calculates and reports what the new average July high temperature would be for each of these cities if temperatures rise by 2 percent.

#include <iostream>
#include <iomanip>
using namespace std;   

int main() {

    //The Original Temperatures
    double NEW_YORK_TEMP = 85.0;
    double DENVER_TEMP = 88.0;
    double PHOENIX_TEMP = 106.0;

    //The Percentage Increases by 2%
    double PERCENTAGE_INCREASE = 1.02;

    //Calculating the New Temperatures
    double NEW_YORK_NEW_TEMP = NEW_YORK_TEMP * PERCENTAGE_INCREASE;
    double DENVER_NEW_TEMP = DENVER_TEMP * PERCENTAGE_INCREASE;
    double PHOENIX_NEW_TEMP = PHOENIX_TEMP * PERCENTAGE_INCREASE;

    //Output the New Temperatures

    std::cout << fixed << setprecision(2); // Set the presision to 2 decimal places
    std::cout << "The new average July high temperature in New York City would be: " << NEW_YORK_NEW_TEMP << " degrees Fahrenheit." << std::endl;
    std::cout << "The new average July high temperature in Denver would be: " << DENVER_NEW_TEMP << " degrees Fahrenheit." << std::endl;
    std::cout << "The new average July high temperature in Phoenix would be: " << PHOENIX_NEW_TEMP << " degrees Fahrenheit." << std::endl; 

    return 0;




}