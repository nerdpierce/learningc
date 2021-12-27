#include <iostream>

// conditional expression 
//
// 1. define a bool name mycondition with a value of true
// 2. define a int named x with a value of 0
// 3  define value of x using if condition 
// 4. print results of if condition

int main()
{
  bool mycondition = false;
  int x = 0;
  x = (mycondition) ? 1 : 0;
  std::cout << "The value of x is: " << x << '\n';
}
