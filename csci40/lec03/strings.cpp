#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "apple";
  cout << s.size() << endl;  // this is a function that acts on *s itself*

  string s2 = " banana";
  cout << s + s2 << endl;

  // gives back the index of the first l
  cout << s.find('l') << endl;
  cout << s.find("ple") << endl;

  // s right now is "apple"
  // I want to turn it into "apricot"
  // starting at index 2, I want to replace 3 chars with "ricot"
  s.replace(2, 3, "ricot");  // this *changes* s
  cout << s << endl;

  // s right now is "apricot"
  // I want to extract "cot", which starts at index 4, and it's 3
  // chars long
  cout << s.substr(4, 3) << endl;
  cout << s << endl;

  return 0;
}

