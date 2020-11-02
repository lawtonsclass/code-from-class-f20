#include "searching.h"
using namespace std;

// returns the index of the value if it finds it, -1 otherwise
int linearSearch(const vector<int>& v, int valToSearchFor) {
  // go through the vector (from left to right), and see if any element is
  // valToSearchFor
  for (int i = 0; i < v.size(); i++) {
    if (v.at(i) == valToSearchFor) {
      return i;  // that's the first index where valToSearchFor was!
    }
  }
  // if we didn't find it, return -1
  // if we got here, we didn't find it in the loop
  return -1;
}

int binarySearch(const vector<int>& v, int valToSearchFor) {
  int lo = 0, hi = v.size() - 1, mid;

  // stop the loop if lo > hi
  while (lo <= hi) {
    mid = (lo + hi) / 2;
    // check the middle element
    int midElem = v.at(mid);
    if (midElem < valToSearchFor) {
      // check the bigger half of the array
      // lo needs to change
      lo = mid + 1;  // we know it's not mid, too
    } else if (midElem > valToSearchFor) {
      // check the smaller half of the array
      // hi needs to change
      hi = mid - 1;
    } else {
      // if we got here, midElem == valToSearchFor!
      return mid;  // mid is the index
    }
  }

  // if it didn't find it, return -1
  return -1;
}

