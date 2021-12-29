#include <iostream>
#include <string>

int main()
{
  char r = 's';
  int q = 44;
  double s = 4.44;
  std::string black = "Been here before";
  std::cout << "The address of char is:" << (void*) &r;
  std::cout << "\nThe size of char is:" << sizeof(char);
  std::cout << "\nThe address of int is:" << &q;
  std::cout << "\nThe size of int is:" << sizeof(int);
  std::cout << "\nThe address of double is:" << &s;
  std::cout << "\nThe size of double is:" << sizeof(double);
  std::cout << "\nThe address of string is:" << &black;
  std::cout << "\nThe size of string is:" << sizeof(std::string);
}
  
