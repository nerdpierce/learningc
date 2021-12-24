#include <iostream>
#include <string>

// Define and combine strings
// 1. define a string
// 2. deine another string
// 3. combine the two strings to create a new string
// 4. print results of combined strings.

int main()
{
  std::string s1 = " This is why ";
  std::string s2 = "I do what I do";
  std::string s3 = s1 + s2;
  std::cout << " The results of the strings are: " << '\n';
  std::cout << s3;
}
