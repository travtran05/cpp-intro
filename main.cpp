#include <iostream>
#include <math.h>
#include <cmath>
#include <limits>
#include <stdio.h>
#include <vector>
#include <array> 
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"
#include "Polygon.hpp"
#include "AUV.hpp"


//practice
int subtract(int x, int y) {
    return x-y;
}

int multiply(int x, int y) {
    return x*y;

}

float divide(int x, int y) {
    if (y!=0) {
      return x/y;
    } else {
      std::cout << "No dividing by 0." << std::endl;
    }
    return INFINITY;
}

//practice
class Circle {
public:
  double radius;

  double area() {
    return M_PI*radius*radius;
  };

  Circle(int radius) {
      this->radius = radius;
  };

};

// problems 1 and 2 removed because of problem 10

//problems 3 and 4 removed because of problem 10

//problem 5 told to skip

// problem 6 removed because of problem 10

// problem 7 and 8 removed because of problem 10

//problem 9 removed because of problem 10

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

  Circle circle1 = Circle(7);

  std::cout << "The area is " << circle1.area() << std::endl;


  


  return 0;
}