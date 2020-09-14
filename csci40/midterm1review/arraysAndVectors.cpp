#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  // let's get the avg of arr

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += arr[i];
  }

  double avg = sum / 5.0;  // DOUBLE DIVISION!!!
  cout << avg << endl;

  cout << "Enter the size of the vector: ";
  int size;
  cin >> size;
  vector<int> v;  // starts out empty
  // ask the user to enter size elements
  for (int i = 0; i < size; i++) {
    // get the next number
    int num;
    cin >> num;
    // add it to the end of the vector v
    v.push_back(num);
  }

  int sum2 = 0;
  for (int x : v) {
    sum2 += x;
  }
  double avg2 = sum2 / static_cast<double>(v.size());
  cout << avg2 << endl;

  return 0;
}
