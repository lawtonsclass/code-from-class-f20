#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
  char s[] = {'b', 'l', 'a', 'h', '\0'};  // "blah"
  // s is equivalent to the following C-string
  char s2[] = "blah";
  // the null terminator character ('\0') is *very* important for
  // C-strings
  char notACStr[] = {'a', 'b', 'c'};

  cout << "s: " << s << endl;
  cout << "s2: " << s2 << endl;
  cout << "notACStr: " << notACStr << endl;  // undefined behavior

  char notAnInt[] = "42";
  // I can convert notAnInt to an integer so that I can do int stuff
  // with it
  cout << atoi(notAnInt) * 2 << endl;
  // you can also use stoi for C-strings *or* C++ strings
  cout << stoi(notAnInt) * 2 << endl;

  char s3[40] = "hello";   // holds the string hello, but has extra space!
  strcat(s3, ", world!");  // equivalent to C++ string's s3 = s3 + ", world!"
  cout << s3 << endl;

  cout << strlen(s3) << endl;

  cout << "strcmp(\"abc\", \"abc\"): " << strcmp("abc", "abc") << endl;
  cout << "strcmp(\"abc\", \"aac\"): " << strcmp("abc", "aac") << endl;
  cout << "strcmp(\"aac\", \"abc\"): " << strcmp("aac", "abc") << endl;

  return 0;
}
