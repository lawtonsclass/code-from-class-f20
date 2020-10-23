#include <iostream>
#include <unordered_map>
using namespace std;

int ways_slow(int n) {
  // base case: 1 way to get to the 0th stair, and 1 way to get to the
  // first stair
  if (n < 2) return 1;
  return ways_slow(n - 2) + ways_slow(n - 1);
}
// hey, that's just fibonacci

unordered_map<int, int> m;
int ways(int n) {
  // base case: 1 way to get to the 0th stair, and 1 way to get to the
  // first stair
  if (n < 2) return 1;

  if (m.count(n) > 0)
    return m.at(n);
  else {
    // calculate the value and save it so that we never have to
    // recompute it (because the subproblems overlap so much)
    int solution = ways(n - 2) + ways(n - 1);
    m.emplace(n, solution);
    return solution;
  }
}

int main() {
  cout << ways(200) << endl;
  cout << ways_slow(42) << endl;
  return 0;
}
