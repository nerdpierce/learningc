#include <iostream>
#include <string>

// 1. First the program will ask the user a question and promt 
//    user for respose.
//
// 2. The program will gather the input information from the user
//
// 3. The program will display response based on the information
//    gathered by user.

int main()
{
  char instrument[256];
  std::cout << "whats your favorite sound? " << std::endl;

  std::cin.getline(instrument, 256);
  std::cout << instrument << " is a wonderful sound. "; 
}
