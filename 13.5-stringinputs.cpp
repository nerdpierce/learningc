#include <iostream>
#include <string>

// Here we use string inputs to gather information
// and give a response to user based on information 
// obtained
  
  int main()
{
  std::string s;
  std::cout << " Please enter a string: ";
  std::getline(std::cin, s);
  std::cout << " You've entered " << s;
}
