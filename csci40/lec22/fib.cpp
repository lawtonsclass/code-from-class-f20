#include <iostream>
using namespace std;

// returns the nth fibonacci number
int fib(int n) {
  if (n == 0 || n == 1)
    return n;
  else
    // assume that fib of smaller ns works perfectly--use those
    // smaller solutions to correctly build up the bigger solution
    return fib(n - 2) + fib(n - 1);
}

int main() {
  cout << fib(6) << endl;
  // this will never finish
  cout << fib(200) << endl;

  return 0;
}
