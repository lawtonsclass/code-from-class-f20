#include <iostream>
using namespace std;

int main() {
  // the user will first enter N, which is how many #s the user wants
  // to give us
  int N;
  cout << "How many numbers? ";
  cin >> N;

  // use that N to make an array of size N on the heap
  int* arr = new int[N];

  // read the N numbers
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  // print out the sum or something
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += arr[i];
  }
  cout << "sum: " << sum << endl;

  delete[] arr;  // technically all the memory for this program is about to go
                 // away because this program is about to end
                 // we don't actually need to delete[] arr, but it's
                 // good practice!
  return 0;
}
