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

//problem 9

class AUV{
  public:
    std::string name;
    Point position;
    double depth;
    double heading;
    std::array<double, 3> speed;
    double angular_speed;

    AUV(std::string name, Point position, double depth, double heading, std::array<double, 3> speed, double angular_speed) : name(name), position(position), depth(depth), heading(heading), speed(speed), angular_speed(angular_speed) {

    }

    void step(const double &dt) {
      position.setx(speed[0] * dt);
      position.sety(speed[1] * dt);
      depth += speed[2] * dt;
      heading += angular_speed*dt;
    }


    void apply_acceleration(std::array<double, 3> accel, double dt) {
        speed[0] += accel[0] *dt;
        speed[1] += accel[1] *dt;
        speed[2] += accel[2] *dt;

    }

    void apply_angular_acceleration(double angular_acceleration, double dt) {
        angular_speed+=angular_acceleration*dt;
    }


};


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