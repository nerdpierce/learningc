#include <iostream>
#include <string>

// Here we search for a find a substring within a string
// and print out its contents.

int main()
{
  std::string s = " This is a black mans world! ";
  std::string stringtofind = "black";
  std::string::size_type found = s.find(stringtofind);
  if (found != std::string::npos)
  {
    std::cout << " substring found at postition: " << found;
  }
  else
  {
    std::cout << "The substring is not found.";
  }
}
