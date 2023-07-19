#pragma once
#include "Point.hpp"


class Triangle {
    private:
        Point p1;
        Point p2;
        Point p3;

    public:
        Triangle(Point p1, Point p2, Point p3);

        Point p1() {return p1;}
        Point p2() {return p2;}
        Point p3() {return p3;}

        double area();

        Point p1() {return p1;}
        Point p2() {return p2;}
        Point p3() {return p3;}

        Point setP1(Point newP1) {
            p1 = newP1;
        }

        Point setP2(Point newP2) {
            p2 = newP2;
        }

        Point setP3(Point newP3) {
            p3 = newP3;
        }

};