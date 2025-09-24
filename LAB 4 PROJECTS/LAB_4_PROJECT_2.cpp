//Chris Zuniga
//Stepember 9, 2025
//LAB 4 PROJECT (part 2 of 5)
//This is the LAB 4 PROJECT (part 2)
//Assignment: Design and write a program that uses the 1st program above and print the letter grade

#include <iostream>
using namespace std;

int main(){

//Constants for grade thresholds
const int A_GRADE = 90,
            B_GRADE = 80,
            C_GRADE = 70,
            D_GRADE = 60;

int Grade; // To hold a numeric grade

//Get a numeric grade from the user
std::cout << "Enter your numeric grade (0-100): ";
cin >> Grade;

//Determine the letter grade
if (Grade >= A_GRADE){

    std::cout << "Your letter grade is: A.\n" << std::endl;
}
else if (Grade >= B_GRADE){
    std::cout << "Your letter grade is: B.\n" << std::endl;
}
else if (Grade >= C_GRADE){
    std::cout << "Your letter grade is: C.\n" << std::endl;
}
else if (Grade >= D_GRADE){
    std::cout << "Your letter grade is: D.\n" << std::endl;
}
else {
    std::cout << "Your letter grade is: F.\n" << std::endl;
}

return 0;

}
