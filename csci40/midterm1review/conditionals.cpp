#include <iostream>
using namespace std;

int main() {
  if (false) {
    cout << "wat" << endl;
  }

  if (2 < 3) {
    cout << "this makes sense\n";
  }

  if (42 > 43) {
    cout << "42 is greater than 43\n";
  } else {
    cout << "42 is not greater than 43" << endl;
  }

  double score = 72.5;
  if (score >= 90) {
    cout << "A\n";
  } else if (score >= 80) {
    cout << "B\n";
  } else if (score >= 70) {
    cout << "C\n";
  } else {
    cout << "Not A, B, or C\n";
  }

  return 0;
}
