#include <iostream>
using namespace std;

double factorial(int x) {
  double product = 1.0;
  for (int i = x; i >= 1; i--) {
    product = product * i;
  }
  return product;
}

int main() {
  double sum = 0.0;
  int i = 0;
  while (i <= 100) {
    double currentTerm = 1.0 / factorial(i);
    // add the currentTerm into the sum
    sum = sum + currentTerm;
    i++;
  }

  // sum should be a very good approximation for e now!
  cout << sum << endl;

  return 0;
}
