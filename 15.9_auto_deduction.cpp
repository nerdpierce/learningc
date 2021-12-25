#include <iostream>
#include <string>

//Auto type deduction
//
//  1.  define char with type Auto
//  2.  define int with type auto 
//  3.  define double with type auto
//  4.  print the results of each 

int main()
{
  auto c = 'c';
  auto i = 33;
  auto d = 33.3;
  std::cout << " The char is: " << c << '\n';
  std::cout << " The integer is: " << i << '\n';
  std::cout << " The double is: " << d << '\n';
}
