//Chris Zuniga
//October 30, 2025
//LAB 8 PROJECT ((WEEK 2)part 2 of 2)

#include <iostream>
using namespace std;

int main()
{
  {
  //array size and declaration
  const int SIZE = 7;
  int numbers[SIZE];

   //user input 
  std::cout << "Enter " << SIZE << " Intergers: " << std::endl;

 //storing values in array
  for (int numIndex = 0; numIndex < SIZE; ++numIndex)
  {
    //prompting user
    std::cout << "Number: " << (1 + numIndex) << ": ";

    //storing input in array
    std::cin >> numbers[numIndex]; 

  }
  
  // output values in reverse order
  std::cout << "\n The numbers in reverse orders are: " << std::endl;

  //loop to output values in reverse
  for (int revIndex = SIZE - 1; revIndex >= 0;  --revIndex)
  {
    //output values
    std::cout << numbers[revIndex] << " ";
  }

  //new line for formatting
  std::cout << std::endl;


  return 0;
}
}
