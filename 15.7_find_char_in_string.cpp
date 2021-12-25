#include <iostream>
#include <string>

//  Finding chars in strings
//
//  1. define main string with value " Hello C++ World! ";
//  2. find 'C' in the main string.

int main()
{
  std::string mainstring = " Hello C++ World! ";
  char c = 'C';
  auto characterfound = s.find(c);
  if (characterfound != std::string::npos)
  {
    std::cout << " Character found at position: " << characterfound 
      << '\n';

  }
  else
  {
    std::cout << " Character cannot be found." << '\n';
  }
}
