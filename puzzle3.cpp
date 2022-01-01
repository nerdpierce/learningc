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

  std::cout << *q << std::endl;


  // Heap should now hold the value of 9
  // under an new heap allocation.
  
  int *g;
  g = new int;
  *g = 9;

  std::cout << *g << std::endl;


  // Print 8 again.
  
  std::cout << *q << std::endl;



  // Print 9

  std::cout << *g << std::endl;

  return 0;
}
