#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void capitalize(char* s) {
  // if this is an empty string, do nothing!
  if (s[0] == '\0') return;

  // if we're still here, we're in the recursive case

  // capitalize s[0]
  s[0] = toupper(s[0]);
  // recursively capitalize the rest of the string
  // s+1 is the address of the next character in s
  // because C-strings are represented as a pointer to their first
  // charcter, this correctly passes along the smaller string
  capitalize(s + 1);
}

int main() {
  char str[] = "hello";
  capitalize(str);
  cout << str << endl;

  return 0;
}
