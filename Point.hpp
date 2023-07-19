#pragma once

class Point
{
private:
  double m_d_x;
  double m_d_y;

public:
  Point(double x, double y);

  double x(){ return m_d_x; }
  double y(){ return m_d_y; }

  double setx(double value) {
        m_d_x += value;
  }
  
  double sety(double value) {
        m_d_y += value;
  }


  double distance_to_origin();
  double distance_to_point(Point p);
};