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

  void setx(double value) {
        m_d_x += value;
  }
  
  void sety(double value) {
        m_d_y += value;
  }


  double distance_to_origin();
  double distance_to_point(Point p);
};