//Chris Zuniga
//Stepember 15, 2025
//LAB 5 PROJECT (part 4 of 5)
//This is the LAB 5 PROJECT (part 4)
//Assignment: Design and write a program that uses a while-loop to prompt the user for a temperature and keep prompting them until they enter a temperature of 212.34 degrees. Once the proper temperature has been entered, print the following message to the console "The temperature has been successfully set, thank you."

#include <iostream>
using namespace std;

int main() {

    double temperature;

    // Loop the same prompt until the user enters 212.34

    while (true) {

std::cout << "Please enter the temperature (must be exactly 212.34 degrees): ";
std::cin >> temperature;


        // Check if the entered temperature is 212.34
        if (temperature == 212.34) {
            break; // Exit the loop if the temperature is correct
        } else 
        {

            std::cout << "Incorrect temperature. Please try again." << std::endl;

    }


}

std::cout << "The temperature has been successfully set, thank you." << std::endl;

    return 0;

}