#include <cmath>
#include <iostream>
using namespace std;

int main() {
  // let's fill our terminal with an 80x24 grid of *s
  for (int y = 12; y >= -12; y--) {  // which line we're on
    for (double x = -20; x <= 20;
         x += 0.5) {  // the current line is 80 chars long
      // I want my (x, y) coordinate in here to make sense
      // we want it to be (0, 0) in the very middle
      if (y == round(sqrt(100 - x * x))) {
        cout << '*';  // if our (x, y) coord was close enough, graph it
      } else if (y == round(-sqrt(100 - x * x))) {  // bottom half of the circle
        cout << '*';  // if our (x, y) coord was close enough, graph it
      } else if (x == 0 && y == 0) {
        cout << '+';
      } else {
        cout << ' ';
      }
    }  // once this inner loop finishes executing, we've printed 80 stars
    cout << endl;  // get ready for the next line
  }

  return 0;
}
