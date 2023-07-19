#pragma once
#include "Point.hpp"

class Line {
    private:
        Point _p1;
        Point _p2;

    public:
        Line(Point p1, Point p2);

        Point p1() {return _p1;}
        Point p2() {return _p2;}

        Point setP1(Point newP1) {
            _p1 = newP1;
        }

        Point setP2(Point newP2) {
            _p2 = newP2;
        }

        double length();
        double distance_to_point(Point p);

};