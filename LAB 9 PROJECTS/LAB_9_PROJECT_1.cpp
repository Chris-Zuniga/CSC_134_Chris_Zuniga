//Chris Zuniga
//October 20, 2025
//LAB 8 PROJECT (part 1 of 2)


#include <iostream>
#include <fstream> // For file operations
using namespace std;

int main()
{

    ofstream outputFile; // Creating an output file stream object
    int numDays;
    double dailySales;

    outputFile.open("week9_lab1.txt"); // Opening the output file

    cout << "Enter the number of days: ";
    cin  >> numDays;

    for (int day = 1; day <= numDays; ++day)
    {
        cout << "Enter sales for day " << day << ": ";
        cin >> dailySales;
        outputFile << "Sales for day " << day << ": $" << dailySales << endl; // Writing daily sales to the file
    }
    //Close the file
    outputFile.close(); // Closing the file


    cout << "Sales data written to week9_lab1.txt successfully." << endl;

    return 0;
}