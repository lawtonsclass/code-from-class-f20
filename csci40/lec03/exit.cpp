#include <cstdlib>  // C standard library (gives us exit)
#include <iostream>
using namespace std;

int main() {
  cout << "hello" << endl;
  exit(1);  // 1 for error
  // ^ the above function will stop the program with the given return
  // code

  // and the rest of this program will never get executed
  cout << "world" << endl;

  return 0;
}

