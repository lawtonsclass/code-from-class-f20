#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string translate(const string& s) {
  if (s == "snow")
    return "nieve";
  else if (s == "white")
    return "weiß";
  else if (s == "mountain")
    return "山";

  return s;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Give a file name!!!\n";
    return 1;
  }

  ifstream ifs;
  ifs.open(argv[1]);

  string s;
  // read a word at a time and translate it
  while (ifs >> s) {
    // we just read a word
    // translate s if we know how
    cout << translate(s);

    // now, let's preserve the whitespace " "/"\n"
    while (ifs &&
           isspace(ifs.peek())) {  // while the next char in the file is a space
      // advance the cursor and output that space character
      cout << static_cast<char>(ifs.get());
    }
  }

  ifs.close();

  return 0;
}
