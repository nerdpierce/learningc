#include <iostream>
#include <string>
using namespace std;
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
  cout << "whats your favorite sound? " << endl;

  cin.getline(instrument, 256);
  cout << instrument << " is a wonderful sound. "; 
}
