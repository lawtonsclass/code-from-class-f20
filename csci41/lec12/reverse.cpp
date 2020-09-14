#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main() {
  list<int> l = {1, 2, 3};

  // make stack
  stack<int> s;
  // push all items of l onto the stack
  for (int i : l) {
    s.push(i);
  }

  // while the stack isn't empty, pop stuff off and put it at the end
  // of another list
  list<int> l_reversed;  // empty to start
  while (!s.empty()) {
    l_reversed.push_back(s.top());
    s.pop();
  }

  // after the loop, we now have a reversed list
  for (int i : l_reversed) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
