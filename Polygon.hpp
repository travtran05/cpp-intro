#pragma once
#include "Point.hpp"

class Polygon {
    private:
        std::vector<Point> points;

    public:
        Polygon(std::vector<Point> points);

        double area();
        double perimeter();

        std::vector<Point> setPoints(std::vector<Point> newPoints) {
            points = newPoints;
        }

        std::vector<Point> _points(){
            return points;
        }


};