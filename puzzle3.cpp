#include <iostream> 



int main(int argc, char *argv[])
{
  int *p;
  int *q;


  // New Heap Allocation 

  p = new int;

  std::cout << p << std::endl;
  std::cout << *p << std::endl;

  // Assign heap to new heap.

  q = p;

  // Now assign 8 to p through q and print out 8.
 
  *q = 8;

  std::cout << q << std::endl;


  // Heap should now hold the value of 9
  // under an new heap allocation.


  // Print 8 again.


  // Print 9

  return 0;
}
