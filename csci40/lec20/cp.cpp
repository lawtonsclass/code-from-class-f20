#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  ifstream ifs;
  ofstream ofs;
  ifs.open(argv[1]);  // open the file we want to copy (for input)
  ofs.open(argv[2]);  // open the file we want to copy into (for output)

  while (true) {
    // try to read a character
    char c = ifs.get();
    // see if we tried to read past the end of the file
    if (!ifs)
      break;  // the c we got wasn't correct if we read past the end of the file

    ofs.put(c);
  }

  ifs.close();
  ofs.close();

  return 0;
}
