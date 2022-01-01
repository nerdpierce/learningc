#include <iostream>
#include <string>

using namespace std;

long values[8] { 1, 2, 3, 5};
// Declaring Functions.
// Prototypes.
void printMe();
void printStr(string str);

// Main is the entry point for execution of all classes and functions..
int main(int argc, char *argv[])
{

  // Make print Druid!
  string str = "Druid";
  printStr(str);
  printMe();

  return 0;
}

// Implementation of Functions.
// printMe takes no arguments.
void printMe()
{
  cout << "I am being printed from printMe function." << endl;
}

// printStr takes argument.
void printStr(string str)
{
  str += "!";
}
