#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l;  // starts empty
  l.push_front(3);
  l.push_front(2);
  l.push_front(1);

  // so now the list holds [1, 2, 3]

  for (int x : l) {
    cout << x << " ";
  }
  cout << endl;

  // or, the manual way:
  for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  for (list<int>::iterator it = --l.end(); true; it--) {
    cout << *it << " ";
    // break after we visit the beginning
    if (it == l.begin()) break;
  }
  cout << endl;

  // reverse_iterator example
  for (list<int>::reverse_iterator rit = l.rbegin(); rit != l.rend(); rit++) {
    cout << *rit << " ";
  }
  cout << endl;

  return 0;
}
