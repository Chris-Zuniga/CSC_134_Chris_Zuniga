//Chris Zuniga
//October 30, 2025
//LAB 8 PROJECT ((WEEK 2)part 1 of 2)


#include <iostream>
using namespace std;

int main()
{
  //array size and declaration
  const int SIZE = 7;
  int numbers[SIZE];
  int maxValue;
  
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

  //finding maximum value
  maxValue = numbers[0];


  //loop to compare values
  for (int maxIndex = 1; maxIndex < SIZE; ++maxIndex)
  {
    //compare values
    if(numbers[maxIndex] > maxValue)
    {
      //update maximum value
        maxValue = numbers[maxIndex];
    }
  }

  //output maximum value
  std::cout << "The maximum value entered is : " << maxValue << std::endl;

  return 0;
}