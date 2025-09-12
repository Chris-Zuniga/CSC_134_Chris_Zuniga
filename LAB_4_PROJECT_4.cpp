//Chris Zuniga
//Stepember 10, 2025
//LAB 4 PROJECT (part 4 of 5)
//This is the LAB 4 PROJECT (part 4)
//Assignment: Design and write a program that accepts a single character and determine if the character is a vowel or consonant. You must account for upper and lower case characters and do not allow numeric values.

#include <iostream>
using namespace std;

int main(){

char letter; // To hold a single character

std::cout << "Enter a single letter and I'll tell you if it\n";
std::cout << " is a vowel or consonant: ";
cin >> letter; // Get a single letter from the user

//Check if the input is a letter
if
((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')) {
//It's a letter
} else {
    std::cout << "Invalid input. Please enter a single alphabetic character.\n" << std::endl;
    return 1; // Exit the program with an error code
}


//If it's a letter, determine if it's a vowel or consonant
    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ||
        letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        std::cout << letter << " is a vowel.\n" << std::endl;
    } else {
        std::cout << letter << " is a consonant.\n" << std::endl;
    }
    return 0;

}