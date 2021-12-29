#include <iostream>
#include <string>

int main()
{
  char a = 'g';
  int b = 32;
  double c = 3.14;
  std::string hello = "hello black man";
  std::cout << "The size of char is: " << sizeof(char);
  std::cout << "\nThe address of char is:" << (void*) &a;
  std::cout << "\nThe size of int is: " << sizeof(int);
  std::cout << "\nThe address of int is:" << &b;
  std::cout << "\nThe size of double is: " << sizeof(double);
  std::cout << "\nThe address of double is:" << &c;
  std::cout << "\nThe size of string is: " << sizeof(std::string);
  std::cout << "\nThe address of string is:" << &hello;
}
