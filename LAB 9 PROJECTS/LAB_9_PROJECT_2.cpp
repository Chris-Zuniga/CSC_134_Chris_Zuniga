//Chris Zuniga
//October 20, 2025
//LAB 8 PROJECT (part 2 of 2)

#include <iostream>
#include <fstream> // For file operations
#include <iomanip> // For setting output precision
using namespace std;

int main()
{
     // Creating an output file stream object
    ofstream outputFile;
    int numDays;
    double dailySales;

    // Variable to hold the sum of all daily Sales
    double totalSales = 0.0; 

     // Opening the output file
    outputFile.open("week9_lab2.txt"); 

        //Prompt user for number of days
    cout << "Enter the number of days: ";
    cin  >> numDays;

    outputFile << fixed << setprecision(2); // Setting output format for currency

    // Loop to get daily sales, write to file, and calculate total sales
    for(int day = 1; day <= numDays; ++day)
    {
    
        cout << "Enter sales for day " << day << ": $";
        cin >> dailySales;
        // Writing daily sales to the file
        outputFile << "Sales for day " << day << ": $" << dailySales << endl;
        // Accumulating the total sales 
        totalSales += dailySales; 
    }

    // Writing the total sales to the file
    outputFile << "===========================" << endl;
    outputFile <<  "Total Sales: $" << totalSales << endl;
     outputFile << "===========================" << endl;

    // Closing the output file
    outputFile.close(); 

    // Inform user of successful write operation
    cout << "Sales data and total written to week9_lab2.txt successfully." << endl;

    return 0;
}
