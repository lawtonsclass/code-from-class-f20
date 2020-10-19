#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  srand(time(0));

  ifstream ifs;
  ifs.open(argv[1]);

  vector<string> swedishWords;

  // read every word in the file to a vector of strings
  string s;
  // "ifs >> s" tries to get a string, and then evaluates to ifs, so
  // we check if ifs was true
  // if it's true, we didn't read past the end of the file
  // so in the body we're guaranteed a valid line
  while (ifs >> s) {
    // we now have a new word s
    swedishWords.push_back(s);
  }

  ifs.close();

  // get two random swedish words from the vector
  string s1 = swedishWords.at(rand() % swedishWords.size());
  string s2 = swedishWords.at(rand() % swedishWords.size());

  string productName = s1 + s2;
  productName[0] = toupper(productName[0]);  // capitalize it!

  cout << "The hot new Ikea product of the season is: " << productName << endl;

  return 0;
}
