#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// every ostream has an operator<<
// cout is an ostream object, and so is any ofstream object
void write1to10(ostream& os) {
  for (int i = 1; i <= 10; i++) {
    os << i << endl;  // ofs works just like cout!
  }
}

int main() {
  // we'll write to 1to10.txt
  ofstream ofs;           // make an ofstream object
  ofs.open("1to10.txt");  // open the file for writing
  // When you run this program, it will make a file called 1to10.txt
  // in your current working directory.

  for (int i = 1; i <= 10; i++) {
    ofs << i << endl;  // ofs works just like cout!
  }

  ofs.close();  // close the file when we're done working with it

  // open in ios_base::app mode for appending
  ofstream ofs2;
  ofs2.open("1to5.txt", ios_base::app);  // open the file for appending
  for (int i = 1; i <= 5; i++) {
    ofs2 << i << endl;  // ofs works just like cout!
  }
  ofs2.close();

  ofstream ofs3;
  ofs3.open("1to10-withFunctions.txt");
  write1to10(ofs3);  // this will print to the file
  ofs3.close();

  // we can use write1to10 to "write" to cout!
  write1to10(cout);

  return 0;
}
