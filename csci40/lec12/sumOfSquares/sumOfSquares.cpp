// this is our implementation file for our library
#include "sumOfSquares.h"

// this is a stub--it does the bare minimum
// i.e., the types work out, but the answer is usually wrong
/* int sumOfSquares(int n) { return 42; } */

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

int square(int x) { return x * x; }
