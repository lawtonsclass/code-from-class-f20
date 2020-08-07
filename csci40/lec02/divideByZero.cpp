#include <iostream>   // cout & cin & endl;
using namespace std;  // so that I can say cout instead of std::cout

int main() {
  cout << "Please enter a divisor: ";
  int n;     // make space in memory for n
  cin >> n;  // get n from the user
  cout << (42 / n) << endl;

  return 0;
}
