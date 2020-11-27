#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "How many #s? ";
  cin >> n;

  int* arr = new int[n];  // makes an array of size n on the heap

  for (int i = 0; i < n; i++) {
    cout << "Enter the next #: ";
    int nextNum;
    cin >> nextNum;
    arr[i] = nextNum;
  }

  sort(arr, arr + n);  // the middle index is the median now

  if (n % 2 == 0) {
    // avg the two middle indices for the median
    int firstIdx = n / 2 - 1;
    int secondIdx = n / 2;
    cout << static_cast<double>(arr[firstIdx] + arr[secondIdx]) / 2 << endl;
  } else {
    int mid = n / 2;
    cout << arr[mid] << endl;
  }

  delete[] arr;

  return 0;
}
