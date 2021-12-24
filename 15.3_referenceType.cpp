#include <iostream>
#include <string>

// Reference Type
// 1. define an object of type double called mydouble
// 2. define an object of refernce type called myreference
//    and initialize it with mydouble
// 3. change the value of myreference
// 4. print the value of both objects.

int main()
{
  double mydouble = 5.55;
  double& myreference = mydouble;
  myreference = 4.44;
  std::cout << " The values are : " << myreference << " and " << mydouble
  << '\n';
  mydouble = 2.22;
  std::cout << " The values are: " << mydouble << " and " << myreference
  << '\n';

}
