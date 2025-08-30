//Chris Zuniga
//August 30, 2025
//LAB 1 PROJECT (part 1)
//This is the LAB 1 PROJECT (part 1)


#include <iostream>
using namespace std;

int main() {

    double num1, num2, sum, product;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;    

    product = num1 + num2;

    cout << "The Product of" << num1 << " and " << num2 << " is " << product << endl;

    return 0;

}


git init
git config user.name "Chris-Zuniga"
git config user.email "cantorzunigac133@mail.sandhills.edu"

git add LAB_1_PROJECT.cpp
git commit -m "Initial commit of LAB_1_PROJECT.cpp"

git remote add origin https://github.com/Chris-Zuniga/LAB_1_PROJECT.git
git push -u origin main
