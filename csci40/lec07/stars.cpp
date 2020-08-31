#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 4) {  // outer loop--executes 4 times
    // the loop below prints 4 stars
    int j = 0;
    while (j < 4) {
      cout << "* ";
      j++;
    }
    // the loop above prints 4 stars--that's exactly how much I want
    // on a line
    // after the loop finishes, let's print an endl
    cout << endl;

    i++;
  }

  cout << endl;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      // when i is between 1 and 2 (and so is j), print a ' ' instead
      // of a '*'
      if (i >= 1 && i <= 2 && j >= 1 && j <= 2) {
        cout << " ";
      } else {  // otherwise, print that *
        cout << "*";
      }
    }
    cout << endl;
  }

  return 0;
}
