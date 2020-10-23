#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ifstream ifs;
  ifs.open("a.txt");

  if (!ifs) {
    cout << "Error opening ifs\n";
  }

  // open the output file
  ofstream ofs;
  ofs.open("b.txt");

  // get each line from ifs
  string line;
  while (getline(ifs, line)) {
    // this body will only execute if the read succeeded
    // the loop stops once the file is done being read from

    // get its length
    // write that length to b.txt
    ofs << line.size() << endl;
  }

  ifs.close();
  ofs.close();

  return 0;
}
