#include <iostream>
#include <string>

// if / else statements
//
// 1. declare a boolean named b with a value of true
// 2. if statement using boolean
// 3. print results for if statement
// 4. else statement
// 5  print results of else statement 

int main()
{
  bool b = false;
  if (b) 
  {
    std::cout << "The first statement is true.";
    std::cout << "\nThe second statement is also true." << '\n';
  }
  else
  {
    std::cout << "The first statement is false.";
    std::cout << "\nThe second statement is also false." << '\n';
  }
}
