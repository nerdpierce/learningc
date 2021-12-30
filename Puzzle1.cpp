#include <iostream>


int main(int argc, char *argv[])
{
  int i = 2;
  int j = 4;
  int k = 8;

  // Pointer is memory alloc / malloc. &reference that is not.
  int* p = &i;
  int* q = &j;
  int* r = &k;

  k = i;

  // 242242

  std::cout << i << j << k << *p << *q << *r << std::endl;

  p = q;

  //242442

  std::cout << i << j << k << *p << *q << *r << std::endl;

  *q = *r;

  // 242448

  std::cout << i << j << k << *p << *q << *r << std::endl;

  return 0;
}
