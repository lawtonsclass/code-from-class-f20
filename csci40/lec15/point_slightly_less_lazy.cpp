#include <iostream>
using namespace std;

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

int main() {
  Point p, q;
  p.x = 1;
  p.y = 2;
  q.x = 3;
  q.y = 4;

  p.negate();
  q.scale(2);

  Point sum = p.add(q);  // or equivalently q.add(p);

  // right now: p should be (-1, -2)
  //            q should be (6, 8)
  //            sum should be (5, 6)
  cout << "p: (" << p.x << ", " << p.y << ")\n";
  cout << "q: (" << q.x << ", " << q.y << ")\n";
  cout << "sum: (" << sum.x << ", " << sum.y << ")\n";

  return 0;
}

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
