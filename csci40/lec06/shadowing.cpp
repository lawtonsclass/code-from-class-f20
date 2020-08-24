#include <iostream>
using namespace std;

int main() {
  int x = 42;

  if (x < 43) {
    int x = 7;  // the closest always is what you get
    // this declaration "shadows" the outer x
    cout << "inner x: " << x << endl;
  }

  cout << "outer x: " << x << endl;

  return 0;
}
