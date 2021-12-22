#include <iostream> 
#include <string>

/** Tell me in steps what you are trying to do.
* 1. This program should first prompt the user for input.
* 2. The algorithm should then gather that input and curate
*    a response on the basis of what the user input.
* 3. The program should execute and terminate.
*/

int main()
{
  std::string mood;
  std::cout << "How are you black man?  ";

  std::cin >> mood;
  std::cout << "That's great that you are " << mood << std::endl;
  
  
  return 0; 

}

