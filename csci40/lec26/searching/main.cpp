#include "searching.h"
using namespace std;

int main() {
  vector<int> v = {8, 6, 7, 7, 5, 3, 0, 9};

  cout << linearSearch(v, 7) << endl;
  cout << linearSearch(v, 8) << endl;
  cout << linearSearch(v, 9) << endl;
  cout << linearSearch(v, 42) << endl;

  sort(v.begin(), v.end());

  // v is 0 3 5 6 7 7 8 9

  cout << binarySearch(v, 7) << endl;
  cout << binarySearch(v, 8) << endl;
  cout << binarySearch(v, 9) << endl;
  cout << binarySearch(v, 0) << endl;
  cout << binarySearch(v, 3) << endl;
  cout << binarySearch(v, 42) << endl;

  cout << "Hello, world!\n\n";  // I only need to recompile main.cpp after
                                // adding this

  return 0;
}
