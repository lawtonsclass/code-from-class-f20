#include <iostream>
using namespace std;

int main() {
  cout << "What day is it? ";
  string answer;
  cin >> answer;

  // this whole big thing is called an if/else statment
  if (answer == "Wednesday") {
    // if the answer is equal to Wednesday, we execute every line in
    // betwen these braces
    cout << "Wear pink!" << endl;
  } else {
    // if the question we asked was not true, we execute every line in
    // between *these* braces
    cout << "You don't have to wear pink" << endl;
  }
  // once the if/else statement is finished, we go back to executing
  // every statement

  cout << "We get here no matter what." << endl;
}
