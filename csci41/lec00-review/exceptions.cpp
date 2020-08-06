#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "What do you want on your pizza? ";
  string resp;
  cin >> resp;

  // if (resp == "Pineapple") {
  //  cout << "How dare you\n";
  //  exit(1);
  // }

  // exeptions occur when they're "thrown"
  // try to do the following
  try {
    if (resp == "Pineapple") {
      throw string("pineapple");
    }
  } catch (string& s) {
    // if we got inside this catch block, then a string was thrown
    // and we can fix the problem
    if (s == "pineapple") {
      cout << "Fixing the pineapple\n";
      resp = "Pepperoni";
    }
  }

  cout << "The program continues here...";
  cout << resp << endl;

  return 0;
}
