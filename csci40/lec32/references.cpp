#include <iostream>
#include <vector>
using namespace std;

// WRONG WAY: call-by-value--only copies things
// int a = main's x;
// int b = main's y;
void swap_ints_bad(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

// RIGHT WAY: call-by-reference
// int& a = main's x;
// int& b = main's y;
void swap_ints(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

// don't do this--it copies the giant vector
/* int sum_vector_bad(vector<int> v) { */
/* } */

// v isn't getting copied
// make it const so you can't accidentally change the values
int sum_vector(const vector<int>& v) {
  int sum = 0;
  for (int x : v) {
    sum += x;
  }
  return sum;
}

int main() {
  int x = 42, y = 43;

  swap_ints_bad(x, y);

  cout << x << " " << y << endl;

  swap_ints(x, y);

  cout << x << " " << y << endl;

  vector<int> v(10000, 42);
  cout << v.size() << endl;
  cout << v.at(0) << endl;

  cout << sum_vector(v) << endl;

  return 0;
}
