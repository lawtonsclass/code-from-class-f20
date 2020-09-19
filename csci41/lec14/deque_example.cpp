#include <deque>
#include <iostream>
using namespace std;

int main() {
  deque<int> d;

  d.push_front(1);
  d.push_back(2);
  d.push_front(3);
  d.push_back(4);
  // [3 1 2 4]

  for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
    cout << *it << " ";
  }
  cout << endl << endl;

  for (auto it = d.begin(); it != d.end(); it++) {
    cout << *it << " ";
  }
  cout << endl << endl;

  for (int x : d) {
    cout << x << " ";
  }
  cout << endl << endl;

  for (auto x : d) {
    cout << x << " ";
  }
  cout << endl << endl;

  return 0;
}
