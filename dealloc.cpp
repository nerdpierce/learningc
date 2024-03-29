#include <iostream>

int* Func();
void Use(int* noptrInt);
int main()
{
  // Take ownership of the Memory.
  int* optrNewInt = Func();

  Use(optrNewInt);
  
  delete optrNewInt; 

  optrNewInt = nullptr;
  cout << "Hello from inside of main." << endl;
  return 0;
}

int* Func()
{
  // malloc.
  return new int; 
}

void Use(int* noptrInt)
{
  //Use memory but not own it.
}
