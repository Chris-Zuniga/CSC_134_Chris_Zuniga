//Chris Zuniga
//October 1, 2025
//LAB 7 PROJECT (part 2 of 2)
// Assignment : Write a program that asks the user to enter the amount that they have budgeted for a month. 
//  A loop should then prompt the user to enter each of their expenses for the month and keep a running total. 
//  When the loop finishes, the program should display the amount that the user is over or under budget.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double BugetedAmount; // The user's budgeted amount for the month
    double Expense; // Each expense entered by the user
    double TotalExpenses = 0.0; // Running total of expenses
    int NumberOfExpenses; // Number of expenses to be entered

    // Prompt the user to enter the budgeted amount
    std::cout << "Enter the amount you have budgeted for the month: $";
    std::cin >> BugetedAmount;

    // Prompt the user to enter the number of expenses
    std::cout << "Enter the number of expenses you will enter: ";
    std::cin >> NumberOfExpenses;

    // Loop to get each expense and add it to the total
    for (int Month = 1; Month <= NumberOfExpenses; ++Month)
    {
        // Prompt the user to enter each expense
        std::cout << "Enter expense # " << Month << ": $";
        std::cin >> Expense;

        TotalExpenses += Expense; // Adding the expense to the total
    }

    // Displaying the total expenses and budget comparison
    std::cout << fixed << setprecision(2); // To format the outputs to 2 decimal places
    std::cout << "Total Expenses: $" << TotalExpenses << std::endl;

    // Check if the user is OVER or UNDER or EQUAL budget

    if (TotalExpenses > BugetedAmount)
    {
        std::cout << "You are OVER budget by: $" << (TotalExpenses - BugetedAmount) << std::endl;
    }
    else if (TotalExpenses < BugetedAmount)
    {
        std::cout << " You are UNDER budget by: $" << (BugetedAmount - TotalExpenses) << std::endl;
    }
    else
    {
        std::cout << "You are exactly on budget!" << std::endl;
    }

    return 0;
}
