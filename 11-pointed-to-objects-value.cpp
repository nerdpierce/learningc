#include <iostream>
int main()
{
  int x = 123;
  int* p = &x;
  *p = 456; // change the vaule of pointed to object
  std::cout << " The value of x is: " << x;
}
