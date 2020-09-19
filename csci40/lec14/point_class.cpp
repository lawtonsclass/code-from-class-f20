#include <iostream>
using namespace std;

class Point {
 public:  // so the users can see our stuff
  // member vars
  double x;
  double y;

  void negate(){...} 
  Point add(Point p2) { ... }
  void scale(double c) { ... }
};

int main() {
  Point p;
  p.x = 42;
  p.y = 43;

  // we can now *call* methods on p!
  p.negate();  // should make p.x = -42, and p.y = -43
  p.scale(2);  // should make p.x = -84, and p.y = -86

  return 0;
}
