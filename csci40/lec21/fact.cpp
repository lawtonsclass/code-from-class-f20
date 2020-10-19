#include <iostream>
using namespace std;

// returns n!
int fact(int n) {
  if (n == 1) {
    // base case
    // 1! = 1
    return 1;
  } else {
    // recursive case
    // n! = n * (n-1)!
    return n * fact(n - 1);
    // you get to *assume* (without thinking about it!) that fact(n-1)
    // correctly computes (n-1)!
    // All you have to worry about is building up the bigger answer
    // with that!!!
  }
}

// iterative version of factorial:
int fact_iterative(int n) {
  int res = 1;
  for (int i = n; i >= 1; i--) {
    res = res * i;
  }
  return res;
}

int main() {
  cout << fact(5) << endl;
  cout << fact_iterative(5) << endl;

  return 0;
}
