#include <cstdlib>  // for exit
#include <iostream>
#include <string>  // for stoi
using namespace std;

// now we don't need to use cin if we don't want to!
// We have another way of getting information from the user before the
// program starts!!!
int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "hey man, you were supposed to use the program like this:\n";
    cout << argv[0] << " n, where n is the width of the box\n";
    exit(1);
  }

  // if we haven't exited, we have something in argv[1]
  // let's extract the width--remember that it's currently a string
  // We need to convert that to a number
  int width = stoi(argv[1]);

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < width; j++) {
      cout << '*';
    }
    cout << endl;
  }

  return 0;
}
