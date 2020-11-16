#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printInt(int x) { cout << x << endl; }
int inc(int x) { return x + 1; }

int main() {
  vector<int> v = {1, 2, 3};
  // calls printInt for every element of v
  // I'm using a function as an argument to another function!!!
  for_each(v.begin(), v.end(), printInt);

  transform(v.begin(), v.end(), v.begin(), inc);
  for_each(v.begin(), v.end(), printInt);

  // [](int x) { cout << x << endl; }
  // ^ is a function with no name that takes an int and couts that int
  for_each(v.begin(), v.end(), [](int x) { cout << x << endl; });

  return 0;
}
