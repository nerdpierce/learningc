#include <iostream>
#include <string>

// Array definition
// define and initialize an arrary of 5 doubles
// change the value of the doubles
// print out the first and last arrary;

int main()
{
  double arr[5] = { 1.32, 4.44, 5.55, 6.66, 7.77 };
  arr [0] = 1.11;
  arr [4] = 5.55;
  std::cout << " The fist array element is: " << arr[0] << '\n';
  std::cout << " The last array element is: " << arr[4] << '\n';
  
}
