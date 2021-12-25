#include <iostream>
#include <string>

// Strings from std input 
// 
// 1. define string and call it fullname
// 2. store std::getline as fullname
// 3. print out string

int main()
{
  std::string fullname;
  std::cout << " Please enter fullname ";
  std::getline(std::cin, fullname);
  std::cout << " Your name is: " << fullname;
}
