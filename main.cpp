#include <iostream>
#include <math.h>
#include <cmath>
#include<limits>
#include <stdio.h>
#include <vector>

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


//problem 1

class Point {
  public:
    double x;
    double y;

    Point(double x, double y){
      this->x = x;
      this->y = y;

    };

    double distance_to_origin() {
      return sqrt(pow(x,2)+pow(y,2));
    };

    //problem 2
    double distance_to_point(Point p){
      return sqrt(pow(x-p.x,2)+pow(y-p.y,2));
    };

};

//problem 3

class Line{

  public:
    Point p1;
    Point p2;

    Line(Point p1, Point p2) : p1(p1), p2(p2){

    }

    double length() {
      return p1.distance_to_point(p2);
    }
    
    //problem 4
    double distance_to_point(Point p) {
        double x1 = p.x;
        double y1 = p.y;
        double a = p1.y-p2.y;
        double b = -1*(p1.x-p2.x);
        double c = p1.x*p2.y-p2.x*p1.y;

        return (abs(a*x1+b*y1+c))/(sqrt(pow(a,2)+pow(b,2)));

    }

};



// problem 6

class Triangle
{
  public:
    Point p1;
    Point p2;
    Point p3;


    Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {

    }

    double area()
    {
      double a = sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
      double b = sqrt(pow((p1.x-p3.x),2) + pow((p1.y-p3.y),2));
      double c = sqrt(pow((p2.x-p3.x),2) + pow((p2.y-p3.y),2));
      double semi_perim = (a+b+c)/2;

      double area = sqrt(semi_perim*(semi_perim-a)*(semi_perim-b)*(semi_perim-c));
      return area;
    }
};

// problem 7

class Polygon{
  public:
    std::vector<Point> points;

    Polygon(std::vector<Point> points) : points(points) {


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