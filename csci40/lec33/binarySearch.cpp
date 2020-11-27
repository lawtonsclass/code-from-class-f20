#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& v, int valToSearchFor) {
  int lo = 0;
  int hi = v.size() - 1;

  while (lo <= hi) {  // while the search space is nonempty
    int mid = (lo + hi) / 2;
    if (v.at(mid) > valToSearchFor) {
      // search the left half
      hi = mid - 1;
    } else if (v.at(mid) < valToSearchFor) {
      // search the right half
      lo = mid + 1;
    } else {
      // we found it!
      return mid;
    }
  }

  // didn't find it :(
  return -1;
}

int main() {
  vector<int> v = {2, 4, 6, 8, 10};  // has to be sorted

  cout << binarySearch(v, 2) << endl;   // 0
  cout << binarySearch(v, 10) << endl;  // 4
  cout << binarySearch(v, 6) << endl;   // 2
  cout << binarySearch(v, 5) << endl;   // -1

  return 0;
}
