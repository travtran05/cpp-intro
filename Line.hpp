#pragma once
#include "Point.hpp"

class Line {
    private:
        Point p1;
        Point p2;

    public:
        Line(Point p1, Point p2);

        Point p1() {return p1;}
        Point p2() {return p2;}

        Point setP1(Point newP1) {
            p1 = newP1;
        }

        Point setP2(Point newP2) {
            p2 = newP2;
        }

        double length();
        double distance_to_point(Point p);


};