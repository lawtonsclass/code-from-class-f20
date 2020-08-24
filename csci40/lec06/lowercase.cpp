#include <cctype>  // for tolower
#include <iostream>
#include <string>  // for the string type
using namespace std;

int main() {
  cout << "Enter a word: ";
  string s;
  cin >> s;

  // iterate through (i.e., visit) all indices of the string s, and
  // call tolower to reset the char there
  int i = 0;
  // we want i to range over all valid indices in the string s
  while (i < s.size()) {
    // at the current index, lowercase the char
    s.at(i) = tolower(s.at(i));
    i++;
  }

  cout << s << endl;

  // now let's capitalize it with a for loop
  for (int i = 0; i < s.size(); i++) {
    s.at(i) = toupper(s.at(i));
  }

  cout << s << endl;

  return 0;
}
