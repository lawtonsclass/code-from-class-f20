#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  priority_queue<int> pq;
  pq.push(1);
  pq.push(5);
  pq.push(3);
  pq.push(17);
  pq.push(-42);

  // now the priority_queue is filled with values
  // it'll order them with higher-priority things appearing first
  // (when we extract values)
  vector<int> sortedVec;
  while (!pq.empty()) {
    // keep on popping the priority_queue
    int nextElement = pq.top();
    pq.pop();  // remove the max element from the priority_queue
    sortedVec.push_back(nextElement);
  }

  for (int x : sortedVec) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
