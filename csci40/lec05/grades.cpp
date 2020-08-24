#include <iostream>
using namespace std;

int main() {
  cout << "Enter your grade: ";
  double grade;
  cin >> grade;

  // based on the grade, output {A,B,C,D,F}
  if (grade >= 90.0) {
    cout << "A" << endl;
  } else if (grade >= 80.0) {
    // if we got here, !(grade >= 90.0) was true AND (grade >= 80.0)
    // was true
    cout << "B" << endl;
  } else if (grade >= 70.0) {
    cout << "C" << endl;
  } else if (grade >= 60.0) {
    cout << "D" << endl;
  } else {
    cout << "F" << endl;
  }

  return 0;
}
