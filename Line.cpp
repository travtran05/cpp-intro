#include "Line.hpp"
#include <cmath>

Line::Line(Point p1, Point p2) {
    this->p1 = p1;
    this->p2 = p2;
}

double Line::length() {
    return p1.distance_to_point(p2);
}

double Line::distance_to_point(Point p) {
    double x1 = p.x();
    double y1 = p.y();
    double a = p1.y()-p2.y();
    double b = -1*(p1.x()-p2.x());
    double c = p1.x()*p2.y()-p2.x()*p1.y();

    return (abs(a*x1+b*y1+c))/(sqrt(pow(a,2)+pow(b,2)));
}