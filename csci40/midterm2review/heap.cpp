#include <algorithm>
#include <iostream>
using namespace std;

double median(int arr[], int size) {
  // sort the array
  // find the middle element
  sort(arr, arr + size);

  int median;
  if (size % 2 == 1) {
    // return the middle element
    return arr[size / 2];
  } else {
    // avg together two indices
    int i = (size - 1) / 2;
    return (arr[i] + arr[i + 1]) / 2.0;
  }
}

int main() {
  cout << "How many elements? ";
  int n;
  cin >> n;

  // make a size n array of ints on the heap
  // the new operator always gives back a pointer to the
  // newly-allocated heap memory
  int* arr = new int[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter element at index " << i << ": ";
    int x;
    cin >> x;
    arr[i] = x;
  }

  // now arr is completely filled

  cout << "The median of the array is: " << median(arr, n) << endl;

  // we're done with the array; delete[] it
  delete[] arr;

  return 0;
}
