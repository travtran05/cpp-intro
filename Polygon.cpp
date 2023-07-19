#include "Polygon.hpp"
#include "Triangle.hpp"
#include "Line.hpp"
#include <vector>
#include <cmath>


Polygon::Polygon(std::vector<Point> points): points(points) {

}

double Polygon::area() {
    double area = 0.0;

    for (int i = 1; i<points.size()-1; i++) {
        Triangle tempTri = Triangle(points[0], points[i], points[i+1]);
        area+=tempTri.area();
    };

    return area;
}

double Polygon::perimeter() {
    double perimeter = 0.0;
    for (int i = 0; i<points.size()-1; i++) {
        Line tempLine = Line(points[i], points[i+1]);
        perimeter+=tempLine.length();

    }
    Line tempLine2 = Line(points[0], points[points.size()-1]);
    perimeter+=tempLine2.length();

    return perimeter;
}