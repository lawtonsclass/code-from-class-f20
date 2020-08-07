#include <iostream>
using namespace std;

int main() {
  char c;
  cout << "Type a char: ";
  cin >> c;

  cout << c << " really is the number: " << static_cast<int>(c) << endl;

  return 0;
}
