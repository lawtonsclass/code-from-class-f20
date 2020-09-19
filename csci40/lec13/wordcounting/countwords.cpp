#include "countwords.h"
using namespace std;  // this is okay because it's a .cpp file

int countWords(const string& str) {
  int count = 0;
  string state = "OUTSIDE";
  for (int i = 0; i < str.size(); i++) {
    char currentChar = str.at(i);
    // figure out which transition to take, depending on our current
    // state
    if (state == "OUTSIDE") {
      if (isspace(currentChar)) {
        state = "OUTSIDE";
      } else {
        // it wasn't a space character
        // change state to INSIDE
        state = "INSIDE";
        // increment count
        count++;
      }
    } else {
      // I must've been in the INSIDE state
      if (isspace(currentChar)) {
        // transition to outside a word
        state = "OUTSIDE";
      } else {
        // saw a non-space character
        state = "INSIDE";  // still inside the word
      }
    }
  }

  // return our count now
  return count;
}
