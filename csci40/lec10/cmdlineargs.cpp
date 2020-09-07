#include <iostream>
using namespace std;

// argc stands for "argument count"
// argv stands for "argument vector"--it's an array of the text of all
// the args
int main(int argc, char* argv[]) {
  cout << argc << endl;
  for (int i = 0; i < argc; i++) {
    cout << "argv[" << i << "]: " << argv[i] << endl;
  }

  return 0;
}
