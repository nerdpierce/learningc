#include <iostream>


int main(int argc, char *argv[])
{
  int i = 2;
  int j = 4;
  int k = 8;
  int* p = &i;
  int* q = &j;
  int* r = &k;

  k = i;

  std::cout << i << j << k << *p << *q << *r << std::endl;

  p = q;
  std::cout << i << j << k << *p << *q << *r << std::endl;

  *q = *r;
  std::cout << i << j << k << *p << *q << *r << std::endl;

  return 0;
}
