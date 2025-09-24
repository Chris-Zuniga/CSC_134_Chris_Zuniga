//Chris Zuniga
//Stepember 15, 2025
//LAB 5 PROJECT (part 5 of 5)
//This is the LAB 5 PROJECT (part 5)
// Assignment: Design and write a program that uses a while-loop that loops until the 100th iteration. 
// > You should set a counter(accumulator) to track the number of iterations through the loop and exit when the counter reaches 100. 
// > Finally, print the a message on the conolse that tells the user how many iterations were completed---this should be 100


#include <iostream>
using namespace std;

int main() {

    int counter = 0; // Initialize counter

    // Loop until the counter reaches to 100
    while (counter < 100) {
        counter++; // Increment the counter
 cout << "The Counter has loop #" << counter << " times!! " << endl;
}

    // Print the number of iterations until the 100th loop
    std::cout << "The loop has completed " << counter << " iterations." << std::endl;

    return 0;

}