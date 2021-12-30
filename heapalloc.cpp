#include <iostream>
#include <string>
using namespace std;

void sayHello();
class Nerd
{
  public:
    Nerd() {};
    void setLength(double length){};

  private:
    double length_;
};

void setLength(double length)
{
  double length_;
  length_ = length;
};

int main()
{
  // Stack memory endures 'until' the lifecycle of the function.
  // Heap endures until it is removed manually by the developer.

  int *p = new int;
  Nerd *c  = new Nerd; 

  // * value at address operator
  // & address-of operator

  *p = 42;

  // Value of
  cout << *p << endl;

  // Address of
  cout << &p << endl;
  c->setLength(4);

  delete c;
  c = nullptr;
  sayHello();
  cout << c << endl;
  // 0 = Null 
  return 0;
}

void sayHello()
{
  cout << "Hello!" << endl;
}
