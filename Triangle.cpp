#include "Triangle.hpp"
#include <cmath>


Triangle::Triangle(Point p1, Point p2, Point p3) {
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}

double Triangle::area() {

    double a = sqrt(pow((p1.x()-p2.x()),2) + pow((p1.y()-p2.y()),2));
    double b = sqrt(pow((p1.x()-p3.x()),2) + pow((p1.y()-p3.y()),2));
    double c = sqrt(pow((p2.x()-p3.x()),2) + pow((p2.y()-p3.y()),2));
    double semi_perim = (a+b+c)/2;

    double area = sqrt(semi_perim*(semi_perim-a)*(semi_perim-b)*(semi_perim-c));
    return area;
}