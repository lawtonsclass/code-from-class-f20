// this file includes our library and uses it
// compile with: g++ -std=c++17 main.cpp sumOfSquares.cpp -o main
#include <iostream>
using namespace std;

#include "sumOfSquares.h"

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << sumOfSquares(n) << endl;

  return 0;
}

