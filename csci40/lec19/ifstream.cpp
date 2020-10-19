#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// let's make our program read any file that the user gives us
// let's get the filename inside of the command line arguments!
int main(int argc, char* argv[]) {
  // I want to run the program like: ./ifstream filename.txt
  char* filename = argv[1];

  ifstream ifs;
  ifs.open(filename);  // open the file the user asked us to open for reading

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    // get an int from the file
    int n;
    // just pretend ifs was cin
    ifs >> n;  // operator>> is defined for ifstream objects
    sum += n;
  }

  ifs.close();  // close the file when we're done reading from it

  cout << "sum was: " << sum << endl;

  return 0;
}
