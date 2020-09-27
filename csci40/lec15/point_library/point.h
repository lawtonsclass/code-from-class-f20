#ifndef POINT_H
#define POINT_H

// declare in point.h

class Point {
 public:  // things that the user gets to see & use
  // member vars
  double x;
  double y;

  // declare the methods--tell the Point class that they exist
  void negate();
  Point add(const Point& p2);
  void scale(double c);
};

#endif /* end of include guard: POINT_H */
