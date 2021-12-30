#include <iostream>

int main(int argc, char *argv[])
{
  int *x = new int;
  int &y = *x;
  y = 4;

  // Assigment 1
  // Right an algorithm that proves that C++
  // has in fact created a pointer or/and reference to
  // a construct behind the scenes.

  std::cout << &x << std::endl;
  std::cout << *x << std::endl;
  std::cout << x << std::endl;

  std::cout << &y << std::endl;
  std::cout << y << std::endl;


  return 0;
}
