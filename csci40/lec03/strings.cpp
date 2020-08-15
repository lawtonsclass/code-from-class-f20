#include <iostream>
#include <string>  // for the string library
using namespace std;

int main() {
  string s = "The quick brown fox jumps over the lazy dog.";
  // size() is a function that *belongs* to s, in a sense
  cout << s.size() << endl;  // outputs # of chars in the string s

  s = "apple";
  // s.find(c) finds the first occurrence of the character c
  cout << s.find('p') << endl;
  // also works for strings
  cout << s.find("ple") << endl;

  // s right now is "apple"
  // If I wanted to turn "apple" into "apricot", I need to replace the
  // last 3 characters of apple with "ricot".
  // - the starting index of the string I want to replace is 2
  // - I want to replace 3 characters starting at index 2
  // - my replacement string is "ricot"
  s.replace(2, 3, "ricot");  // this *changes* s
  cout << s << endl;

  // s right now is "apricot"
  // Let's pretend I wanted to extract "ico"
  // "ico" starts at index 3
  // "ico" is 3 characters long
  // starting at index 3, I want to take 3 characters
  string s2 = s.substr(3, 3);  // this one does not change s
  cout << s2 << endl;
  cout << s << endl;

  return 0;
}
