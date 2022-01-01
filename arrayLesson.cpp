#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{

  // Create an array of 6 numbers.

  int a[6] { 2, 3, 4, 6, 7, 8 };

  // Cout the size of the array.

  std::cout << sizeof(a) << std::endl;

  // Determine the offset to the index.

  int offset = (long)&(a[4]) - (long)&(a[0]);

  cout << offset << endl;


  std::vector<int> v;   

  cout << "Initial capacity: " << v.capacity() << endl;

  v.push_back(3);

  cout << "Size after adding: " << v.size() << endl;

  cout << "Capacity after adding: " << v.capacity() << endl;

  v.push_back(5);

  cout << "Size after adding: " << v.size() << endl;

  cout << "Capacity after adding: " << v.capacity() << endl;

  int target = 3;

  for (unsigned i = 0; i < v.size(); i++)
  {
    if (target == v[i])
    {
      cout << "Found target at [" << i << "]" << endl;
    }
  }

  return 0;
}
