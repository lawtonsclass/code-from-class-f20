#include <iostream>   // cout, cin
using namespace std;  // no more std::cout, std::cin, std::endl

int main() {
  cout << "Enter a number please: ";
  int n;  // make space for the number that the user enters
  cin >> n;

  // now n has a value
  cout << "42 / your number = " << 42 / n << endl;

  return 0;
}
