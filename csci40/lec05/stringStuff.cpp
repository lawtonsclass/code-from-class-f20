#include <iostream>
#include <string>
using namespace std;

int main() {
  string a = "a";
  string zero = "0";
  cout << (a < zero) << endl;

  string word = "lawton0";
  // let's convert word to a proper noun, by capitalizing it
  // so, get the first character (at index 0) and toupper it
  word.at(0) = toupper(word.at(0));
  cout << word << endl;

  // to check if a string ends with a number character, we need to
  // access the last character and call isdigit
  cout << isdigit(word.at(word.size() - 1)) << endl;

  return 0;
}
