#include "Line.hpp"
#include <cmath>

Line::Line(Point pa, Point pb): _p1(pa), _p2(pb)
{

}

double Line::length() {
    return this->_p1.distance_to_point(this->_p2);
}

double Line::distance_to_point(Point p) {
    double x1 = p.x();
    double y1 = p.y();
    double a = _p1.y()-_p2.y();
    double b = -1*(_p1.x()-_p2.x());
    double c = _p1.x()*_p2.y()-_p2.x()*_p1.y();

    return (abs(a*x1+b*y1+c))/(sqrt(pow(a,2)+pow(b,2)));
}