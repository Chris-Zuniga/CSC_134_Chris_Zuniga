//Chris Zuniga
//Stepember 10, 2025
//LAB 4 PROJECT (part 5 of 5)
//This is the LAB 4 PROJECT (part 5)
//Assignment: Design and write a program that accepts a year from a user and determines if the year is a leap year. If it's a leap year, then print "The year you entered xxxx is a leap year". If the year is NOT a leap year, then print "The year you entered xxxx is NOT leap year"


#include <iostream>
using namespace std;

int main(){

int year; //The year

//Enter the year
std::cout << "Enter the Year: ";
cin >> year;

//Check the leap year conditions

if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0 ))
{
    std::cout << "The year you just entered " << year << " is a leap year." << std::endl;
}
else
{
    std::cout << "The year you just entered " << year << " is NOT a leap year." << std::endl;
}

return 0;

}