#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  ifstream ifs(argv[1]);

  string s;

  // keep getting words from ifs

  ifs >> s;
  cout << "word: " << s << "; ";
  cout << "ifs.eof(): " << ifs.eof() << endl;
  ifs >> s;
  cout << "word: " << s << "; ";
  cout << "ifs.eof(): " << ifs.eof() << endl;
  ifs >> s;
  cout << "word: " << s << "; ";
  cout << "ifs.eof(): " << ifs.eof() << endl;
  ifs >> s;
  cout << "word: " << s << "; ";
  cout << "ifs.eof(): " << ifs.eof() << endl;
  ifs >> s;  // try reading one more word (which doesn't exist)
  cout << "word: " << s << "; ";
  cout << "ifs.eof(): " << ifs.eof() << endl;
  if (!ifs) {
    cout << "ifs is false!\n";
  }

  return 0;
}
