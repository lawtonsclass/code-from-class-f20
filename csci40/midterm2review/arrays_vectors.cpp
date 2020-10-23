#include <iostream>
#include <vector>
using namespace std;

int main() {
  // arrays need their size up front
  int arr[5] = {1, 2, 3};
  arr[3] = 4;
  arr[4] = 5;

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // vectors can grow in size!
  vector<double> v = {3.14, 2.78, 1.5};
  v.push_back(42);
  v.push_back(43);

  // vectors know their size!
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  // or you can use a range-based for loop
  for (double x : v) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
