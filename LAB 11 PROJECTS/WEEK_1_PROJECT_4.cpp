//Chris Zuniga
//October 27, 2025
//LAB 8 PROJECT ((WEEK 1)part 4 of 4)

#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // Prompt user to enter a credit card number
    
    std::string CardNumber;
    std::cout << "Enter the credit card number to Validate: ";

    // Read the credit card number as a string
    std::cin >> CardNumber;

    // Initialize sum and a flag for doubling digits
    int sum = 0;
    bool DoubleDigits = false;

    // Process each digit from right to left
    for(int CardIndex = CardNumber.length() - 1; CardIndex >= 0; --CardIndex)
    {
        int digit = CardNumber[CardIndex] - '0'; // Convert char to int

        // Double every second digit
        if (DoubleDigits)
        {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }

        sum += digit;
        // 
        DoubleDigits = !DoubleDigits;
    }

    // Check if the sum is a multiple of 10
    if (sum % 10 == 0)
    {
        std::cout << "This Credit Card number is VALID" << std::endl;
    } 
    else 
    {
        std::cout << "This Credit Card number is INVALID" << std::endl;
    }
    return 0;
}