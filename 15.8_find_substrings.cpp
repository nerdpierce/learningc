#include <iostream>
#include <string>

// search for substrings in main string.
//
// 1. define main string with a value of " Hello black man! "
// 2. define mysubstring with value of " black"
// 3. define mysubstringfound with vaulue of s.find(mysubstring)
// 4. print out results of substring if found 

int main()
{
  std::string s = " Hello black man! ";
  std::string mysubstring = "black";
  auto mysubstringfound = s.find(mysubstring);
  if (mysubstringfound != std::string::npos)
  {
    std::cout << " Substring found at: " << mysubstringfound <<
      '\n';
  }
  else 
  {
    std::cout << " Substring was not found! " << '\n';
  }
}
