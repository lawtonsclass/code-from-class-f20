#include <iostream>
using namespace std;

// this declares the Point type!
// Now we can make variables of this type and they'll have xs and ys
// inside of them.
struct Point {
  // a Point is defined to hold two doubles: x and y
  double x;
  double y;
};

// this function will take two points and return back the sum of the
// two Points
Point add(Point p1, Point p2) {
  Point ret;
  ret.x = p1.x + p2.x;
  ret.y = p1.y + p2.y;
  return ret;
}

// let's write a negation function that negates the x & y coordinates
// of a Point
void negate_point(Point& p) {
  // update p to hold negative versions of its coordinates
  p.x = -p.x;
  p.y = -p.y;
}

int main() {
  Point p;  // made space in memory for one Point (which is made up of two
            // doubles called x and y)
  // you can use array-like notation to set the member vars in order
  Point q = {44, 45};

  // before, we would've had to make a bunch of separate vars, which
  // sucks
  double p_x, p_y, q_x, q_y;
  // structs are nice because all the data comes in one big package!

  p.x = 42;
  p.y = 43;

  cout << "(" << p.x << ", " << p.y << ")\n";
  cout << "(" << q.x << ", " << q.y << ")\n";

  Point a = {1, 2};
  Point b = {3, 4};
  // c will become {4, 6}
  Point c = add(a, b);
  cout << "(" << c.x << ", " << c.y << ")\n";
  negate_point(c);
  cout << "(" << c.x << ", " << c.y << ")\n";

  return 0;
}
