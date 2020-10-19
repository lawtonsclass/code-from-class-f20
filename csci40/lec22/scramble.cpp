#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> scramble(string s) {
  vector<string> res;  // result vector

  // base case
  // put s in res, and return it
  if (s == "") {
    res.push_back("");
    return res;
  }

  // recursive case
  for (int i = 0; i < s.size(); i++) {
    char startingChar = s.at(i);
    // make a string with the rest of the characters
    string rest = "";
    for (int j = 0; j < s.size(); j++) {
      if (j != i) {
        // not the char we chose; add it to rest
        rest += s.at(j);
      }
    }
    // now rest holds the rest of the chars
    // scramble them
    vector<string> scrambledRest = scramble(rest);
    // add our starting character to the start of every string there
    for (string& str : scrambledRest) {
      str = startingChar + str;
    }
    // add this vector to the result vector now
    for (string str : scrambledRest) {
      res.push_back(str);
    }
  }

  return res;
}

int main() {
  vector<string> possibilities = scramble("cat");

  for (string s : possibilities) {
    cout << s << endl;
  }

  return 0;
}
