#include <iostream>
#include <string>

// Point to an object
// Define and object of type double
// define a pointer that points to that object
// print the value of the object by dereferencing a pointer.

int main()
{
  double d = 3.14;
  double* f = &d;
  std::cout << " The value of the pointed to object is: " << *f;
}
