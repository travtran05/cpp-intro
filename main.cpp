#include <iostream>
#include <math.h>
#include <cmath>

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
      std::cout << "No dividing by 0." << std::endl;
    }

}


class Circle {


public:
  double radius;

  double area() {
    return M_PI*radius*radius;
  }

  Circle(int radius) {
      this->radius = radius;
  }


};


//problem 1

class Point {
  public:
    double x;
    double y;

    Point(double x, double y){
      this->x = x;
      this->y = y;

    }

    double distance_to_origin() {
      return sqrt(pow(x,2)+pow(y,2));
    }

    //problem 2
    double distance_to_origin(Point p){
      return sqrt(pow(x-p.x,2)+pow(y-p.y,2));
    }

};

//problem 3

class Line{

  public:

    Point p1;
    Point p2;

    Line(Point p1, Point p2){
        this->p1 = p1;
        this->p2 = p2;
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