//Chris Zuniga
//October 1, 2025
//LAB 7 PROJECT (part 1 of 2)
// Assignment : A country club(Pinehurst #2) which currently charges $250,000 per year for Membership
//  has announced it will increase its membership fee by 6% each year for the next 5 years. 
//  Write a program that use a for-loop to display the projected sales for the next 5 years.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double MembershipFee = 250000.00; // initial membership fee
    double IncreaseRate = 0.06; // 6% increase rate

    std::cout << fixed << setprecision(2); // To format the outputs to 2 decimal places

    // Displaying the header
    std::cout << "Projected Membership Fees for the Next 5 Years" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Year |\t Membership Fee" << std::endl; 
    std::cout << "------------------------" << std::endl;

    // Loop to calculate and display the membership fee for the next 5 years
    for (int year = 1; year <= 5; ++year)
    {
        MembershipFee += (MembershipFee * IncreaseRate); // Calculating the new membership fee
        std::cout << year << " |\t $" << MembershipFee << std::endl; // Displaying the year and the new membership fee
    }

    return 0;
}
