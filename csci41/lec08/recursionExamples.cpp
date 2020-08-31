#include <iostream>
using namespace std;

int fact(int n) {
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);  // solve a smaller version of the problem
}

int fib(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}

int fibIterative(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else {
    int nMinus1 = 1;
    int nMinus2 = 0;
    for (int i = 0; i < n - 1; i++) {
      // constant work here
      int oldNMinus1 = nMinus1;
      nMinus1 = nMinus1 + nMinus2;
      nMinus2 = oldNMinus1;
    }
    return nMinus1;
  }
}

int sumArray(int arr[], int size) {
  // remember that every array is a pointer to the first value in it
  if (size == 0)
    return 0;
  else
    return arr[0] + sumArray(arr + 1, size - 1);
}

int main() {
  cout << fact(3) << endl;

  cout << fib(5) << endl;

  int arr[] = {1, 2, 3};
  cout << sumArray(arr, 3) << endl;

  cout << fibIterative(200) << endl;

  return 0;
}
