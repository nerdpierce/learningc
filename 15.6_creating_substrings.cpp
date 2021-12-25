#include <iostream>
#include <string>

//  Creating substrings
//
//  1.  define string called fullname equal to John Doe
//  2.  define substring with first name
//  3.  define another substring with last name
//  4.  print main string and 2 substrings

int main()
{
  std::string fullname = "John Doe";
  std::string firstname = fullname.substr(0,4);
  std::string lastname = fullname.substr(5,3);
  std::cout << " Your full name is: " << fullname << '\n';
  std::cout << " Your first name is: " << firstname << '\n';
  std::cout << " Your last name is: " << lastname << '\n';
}
