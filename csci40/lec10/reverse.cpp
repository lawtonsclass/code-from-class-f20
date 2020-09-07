#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8};

  for (int i = 0; i < v.size() / 2; i++) {
    // swap indices i and size - 1 - i
    int temp = v.at(i);
    v.at(i) = v.at(v.size() - 1 - i);
    v.at(v.size() - 1 - i) = temp;
  }
  for (int elem : v) {
    cout << elem << " ";
  }
  cout << endl;

  cout << endl;

  for (int i = 0; i < v2.size() / 2; i++) {
    // swap indices i and size - 1 - i
    int temp = v2.at(i);
    v2.at(i) = v2.at(v2.size() - 1 - i);
    v2.at(v2.size() - 1 - i) = temp;
  }
  for (int elem : v2) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}
