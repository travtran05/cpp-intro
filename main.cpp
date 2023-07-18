#include <iostream>

int subtract(int x, int y) {
    return x-y;
}

int multiply(int x, int y) {
    return x*y;

}

int divide(int x, int y) {
    if (y!=0) {
      return x/y;
    } else {
      std::cout << "No dividing by 0."; 
    }

}


int main()
{
  std::cout << "My name is Travis, my classroom is 115." << std::endl;

  int x = 5;
  int y = 7;
  int z = 2;
  int w = 1;
  int v = 3;
  std::cout << "The sum of " << x << " and " << y << " and " << z << " is " << x + y + z << std::endl;
  std::cout << "The sum of " << x << " and " << y << " and " << z << " and " << w << " is " << x + y + z + w << std::endl;
  std::cout << "The division of " << x << " and " << y << " and " << v << " is " << x/y/v << std::endl; 

  return 0;
}