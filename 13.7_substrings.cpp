
#include <iostream>
#include <string>

// Here we learn about substrings.

int main()
{
  std::string s = "Hello World.";
  std::string mysubstring = s.substr(6, 5);
  std::cout << " The substrings value is: " << mysubstring;
}
  
