#include <iostream>
#include <string>
#include <vector>
using namespace std;

void assertTrue(bool b, string desc) {
  if (b) {
    cout << "PASSED: " << desc << endl;
  } else {
    cout << "FAILED: " << desc << endl;
  }
}

// use a const reference to:
//   (1) save memory by not copying the vector
//   (2) forbid editing of the vector
int sum_vector(const vector<int>& v) {
  int sum = 0;

  for (int x : v) {
    sum += x;
  }

  return sum;
}

int main() {
  // test 1: empty vector
  vector<int> v;
  assertTrue(sum_vector(v) == 0, "sum empty vector");

  vector<int> v2 = {1, 2, 3};
  assertTrue(sum_vector(v2) == 6, "sum {1, 2, 3}");

  vector<int> v3 = {1, -2, 3};
  assertTrue(sum_vector(v3) == 2, "sum {1, -2, 3}");

  return 0;
}
