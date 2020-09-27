// implement in point.cpp
#include "point.h"

// we can implement the methods down here
// methods (member funcs)
// negate should take our current object's x & y and negate them
void Point::negate() {
  // every method has access to the member vars
  // this method got called like "z.negate();" for some Point z
  // saying "x" inside this method gets z's x coordinate
  x = -x;
  y = -y;
  // no need to return anything, because it just changes the
  // current object
}
// z.add(w)
// add our current object's coordinates (z's x & y) and add them
// to w's x & y, giving back a new Point
Point Point::add(const Point& p2) {
  Point ret;
  // add my current x to p2's x
  ret.x = x + p2.x;
  ret.y = y + p2.y;
  // return the new Point
  return ret;
}

void Point::scale(double c) {
  x = x * c;
  y = y * c;
}
