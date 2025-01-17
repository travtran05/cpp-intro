#pragma once
#include "Point.hpp"


class Triangle {
    private:
        Point p1;
        Point p2;
        Point p3;

    public:
        Triangle(Point p1, Point p2, Point p3);

        Point _p1() {return p1;}
        Point _p2() {return p2;}
        Point _p3() {return p3;}

        double area();

        void setP1(Point newP1) {
            p1 = newP1;
        }

        void setP2(Point newP2) {
            p2 = newP2;
        }

        void setP3(Point newP3) {
            p3 = newP3;
        }

};