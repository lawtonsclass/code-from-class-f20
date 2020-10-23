#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

/*
 *  [1, 2, 3]
 *  [2, 3, 1]
 *  extract the 3, then the 2, then the 1
 *  [3, 1, 2]
 *  [3, 2, 1]
 *
 * */

queue<int> reverse(queue<int> q) {
  queue<int> qRev;

  // algorithm: using the size of q, push & pop until the last thing
  // of the queue is at the front

  for (int round = 0; round < q.size(); round++) {
    // now, push/pop q.size() - 1 times to shuffle the end to the
    // beginning
    for (int i = 0; i < q.size() - 1; i++) {
      q.push(q.front());
      q.pop();
    }
    // once this ends, the last element is at the beginning
    // push the front to qRev
    qRev.push(q.front());
  }

  return qRev;
}

int main() {
  vector<int> v = {1, 2, 3};

  stack<int> s;
  // put v into a stack in order
  for (int x : v) s.push(x);
  // pop the stack to reverse v
  vector<int> vRev;
  while (!s.empty()) {
    vRev.push_back(s.top());
    s.pop();
  }
  for (int x : vRev) cout << x << " ";
  cout << endl;

  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);

  queue<int> qRev = reverse(q);
  while (!qRev.empty()) {
    cout << qRev.front() << " ";
    qRev.pop();
  }
  cout << endl;

  return 0;
}
