#include <iostream>


int main(int argc, char *argv[])
{
  int *x; 

  // Turn int pointer x into a new heap alloc array with size.

  // Create a int with label size with value 3.
  
  int size = 3;

  x = new int[size];

  // Write a for loop that loops through size.
  // Printing out its value in each iteration.

  for ( int i = 0; i < size; i++ )
  {
    x[i] = i + 1;
    std::cout << *x << std::endl;
  }

  // Memory management:: delete malloc array and remove
  // dangling pointer.
 
  delete[] x;
  x = nullptr;


  return 0;
}
