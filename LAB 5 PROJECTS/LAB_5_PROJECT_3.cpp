//Chris Zuniga
//Stepember 15, 2025
//LAB 5 PROJECT (part 3 of 5)
//This is the LAB 5 PROJECT (part 3)
//Assignment: Design and write a program that uses a while-loop to prompt a user for 10 grades(must be floating point values) and calculate the average and print the result to the console after all 10 grades have been entered

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double grade;
    double sum = 0.0;
    int count = 0;


    // Loop to get 10 grades from the user
    while (count < 10) {

        std::cout << "Enter grade " << (count + 1) << ": ";
        std::cin >> grade;
        sum += grade; // Add the entered grade to the sum
        count++; // Increment the count

    }

    // Calculate the average and display it
    double average = sum / 10.0;
    std::cout << fixed << setprecision(2);
    std::cout << "The average grade is: " << average << std::endl;
    return 0;
    

}