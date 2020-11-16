#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3};

  // non-iterator way of iterating through v:
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  // iterator option 1: range-based for loop
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;
  // ^ secretly uses iterators

  // iterator option 2: manual iterator
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    // it starts at the beginning of v
    // I'm advancing it (using it++) until it gets to "one past the
    // end" of v

    // inside of the loop body, I can pretend that it is a pointer to
    // the current element
    cout << *it << " ";
  }
  // ^ option 1 secretly gets translated into this code
  cout << endl;

  return 0;
}
