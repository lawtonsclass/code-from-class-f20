#include <iostream>
using namespace std;

class Point {
 public:
  double x;
  double y;

  Point operator+(const Point& other) {
    Point ret;
    ret.x = x + other.x;
    ret.y = y + other.y;
    return ret;
  }
};

int main() {
  Point p1, p2;
  p1.x = 1;
  p1.y = 2;
  p2.x = 3;
  p2.y = 4;

  Point p3 = p1 + p2;  // this will call p1.operator+(p2)
  cout << p3.x << ", " << p3.y << endl;

  return 0;
}
