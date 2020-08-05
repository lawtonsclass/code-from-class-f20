#include <iostream>

#include "statistician.h"
using namespace std;

int main() {
  // makes a new stats object with s.currentNums and s.currentMax
  Statistician s;
  s.init();

  cout << "Enter the next number: ";
  int n;
  cin >> n;
  while (n != -1) {
    // add n to the vector
    s.addNumber(n);
    // add 1 to everything
    add1ToNums(s);
    // print out the vector
    cout << "Current contents: ";
    for (auto i : s.getCurrentNums()) {
      cout << i << " ";
    }
    cout << endl;
    // calculate the current max
    cout << "Current max: " << s.max() << endl;

    cout << "Enter the next number: ";
    cin >> n;
  }

  return 0;
}
