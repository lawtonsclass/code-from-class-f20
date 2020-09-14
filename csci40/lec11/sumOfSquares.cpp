#include <iostream>
using namespace std;

// this is a stub--it does the bare minimum
// i.e., the types work out, but the answer is usually wrong
/* int sumOfSquares(int n) { return 42; } */

int square(int x);
int sumOfSquares(int n);  // a function without a body is declaration

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << sumOfSquares(n) << endl;

  return 0;
}

int square(int x) { return x * x; }

// this n is separate from main's n
int sumOfSquares(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    // square each i
    int sq = square(i);
    // add that square into a sum var
    sum += sq;
  }
  // give back the sum
  return sum;
}
