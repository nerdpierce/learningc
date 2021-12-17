#include <iostream>

  int main()
{
  int x = 123;
  int y = x;
  std::cout << " The value of x is: " << x << " ,the value of y is: " <<y;
  // x is 123
  // y is 123
  x = 456;
  std::cout << " The value of x is: " << x << ",the value of y is: " << y;  
  // x is now 456
  // y is still 123?
}
