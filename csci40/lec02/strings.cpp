#include <iostream>
#include <string>  // for strings
using namespace std;

int main() {
  cout << "Please enter a word: ";
  string s;
  cin >> s;  // get a character from the user, store it in c

  cout << "The first character of your string is " << s.at(0) << endl;
  cout << "The second character of your string is " << s.at(1) << endl;
  cout << "The third character of your string is " << s.at(2) << endl;

  return 0;
}
