#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;
  s.insert(2);
  s.insert(1);
  s.insert(3);

  // check if an element is there
  // (counts in sets can only ever be 0 or 1)
  cout << s.count(2) << endl;
  cout << s.count(4) << endl;

  return 0;
}
