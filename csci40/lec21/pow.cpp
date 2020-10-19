#include <iostream>
using namespace std;

// computes x^y
double pow(double x, int y) {
  if (y == 0) return 1;
  // assuming I had x^y-1, how could I use that to build up x^y
  else
    return x * pow(x, y - 1);
}

int main() {
  cout << pow(2, 4) << endl;

  return 0;
}
