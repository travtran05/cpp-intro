#pragma once
#include "Triangle.hpp"
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

};