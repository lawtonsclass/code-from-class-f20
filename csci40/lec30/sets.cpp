#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;
  s.insert(2);
  s.insert(3);
  s.insert(1);

  // check if an element is there
  // (counts in sets can only ever be 0 or 1)
  cout << s.count(2) << endl;
  cout << s.count(4) << endl;

  for (int x : s) {
    cout << x << " ";
  }
  cout << endl;

  // iterators give back the values in order!

  // sets know the order of their elements
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // most people use auto instead of set<int>::iterator
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // start iterating from 2
  for (auto it = s.lower_bound(2); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // what is the element that comes after 1?
  cout << *s.upper_bound(1) << endl;

  return 0;
}
