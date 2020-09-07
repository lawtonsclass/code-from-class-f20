#include <algorithm>  // for sort
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {5, 4, 3, 2, 1};
  // instead of for (int i = 0; i < v.size(); i++)
  // (assuming i was unnecessary and just helping us get each element)
  // we can do: for (int elem : v)

  for (int elem : v) {
    // elem is the next element each time
    cout << elem << endl;
  }

  cout << endl;

  // let's sort the vector using std::sort
  sort(v.begin(), v.end());  // this messes with the array itself
  for (int elem : v) {
    // elem is the next element each time
    cout << elem << endl;
  }

  return 0;
}
