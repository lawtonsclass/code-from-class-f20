#include <iostream>
using namespace std;

int main() {
  string s;
  cout << "Type a word: ";
  // cin stops reading into a string once it sees whitespace
  cin >> s;

  // s.at(0) = 'A';

  // let's capitalize the string (assume the user always types a
  // lowercase letter first)

  s.at(0) = s.at(0) + ('A' - 'a');

  // you can pick out the individual characters of a string
  cout << "first character: " << s.at(0) << endl;
  cout << "second character: " << s.at(1) << endl;
  cout << "third character: " << s.at(2) << endl;

  return 0;
}
