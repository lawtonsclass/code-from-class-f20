#include <iostream>
#include <vector>
using namespace std;

// computes m^n
double pow_recursive(double m, int n) {
  if (n == 0)
    return 1;
  else
    return m * pow_recursive(m, n - 1);
}

// a "smaller" recursive call to binarySearch is when |hi - lo| gets
// smaller
// base case: when the search space is empty, or of size 1
int binarySearch(const vector<int>& v, int valToSearchFor, int lo, int hi) {
  if (lo > hi)
    return -1;  // not there :(
  else if (lo == hi) {
    if (v.at(lo) == valToSearchFor)
      return lo;
    else
      return -1;
  } else {
    // recursive case
    int mid = (lo + hi) / 2;
    if (v.at(mid) > valToSearchFor) {
      // look in the left half
      return binarySearch(v, valToSearchFor, lo, mid - 1);  // a smaller call!
    } else if (v.at(mid) < valToSearchFor) {
      // look in the right half
      return binarySearch(v, valToSearchFor, mid + 1, hi);  // a smaller call!
    } else {
      // found it!
      return mid;
    }
  }
}

int main() {
  cout << pow_recursive(2, 3) << endl;

  vector<int> v = {2, 4, 6, 8, 10};  // has to be sorted

  cout << binarySearch(v, 2, 0, 4) << endl;   // 0
  cout << binarySearch(v, 10, 0, 4) << endl;  // 4
  cout << binarySearch(v, 6, 0, 4) << endl;   // 2
  cout << binarySearch(v, 5, 0, 4) << endl;   // -1

  return 0;
}
