//Chris Zuniga
//October 20, 2025
//LAB 8 PROJECT (part 2 of 2)

#include <iostream>
#include <fstream> // For file operations
using namespace std;

int main()
{
    ofstream outputFile; // Creating an output file stream object
    int numDays;
    double dailySales;
    double totalSales = 0.0; // Variable to hold the sum of all daily

    outputFile.open("week9_lab2.txt"); // Opening the output file

    cout << "Enter the number of days: ";
    cin  >> numDays;


    for(int day = 1; day <= numDays; ++day)
    {
        cout << "Enter sales for day " << day << ": $";
        cin >> dailySales;
        outputFile << "Sales for day " << day << ": $" << dailySales << endl; // Writing daily sales to the file
        totalSales += dailySales; // Accumulating the total sales
    }

    outputFile << "Total Sales: $" << totalSales << endl; // Writing the total sales to the file
    outputFile.close(); // Closing the file

    cout << "Sales data and total written to week9_lab2.txt successfully." << endl;

    return 0;
}
