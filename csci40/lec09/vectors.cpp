#include <iostream>
#include <vector>
using namespace std;

int main() {
  // this is saying:
  // C++, please make space for a vector called v that holds ints
  vector<int> v = {1, 2, 3};

  // WE DON'T LIKE THE FOLLOWING
  // it's error-prone
  /* for (int i = 0; i < 3; i++) { */
  /*   cout << v[i] << endl; */
  /* } */

  // the above is equivalent to:
  // v.size() returns the size of v
  // v.at(i) is a much safer way of doing "v[i]"
  cout << "v's size: " << v.size() << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << endl;
  }

  // vectors can *grow* in size with the push_back function
  vector<int> v2;  // this is an empty vector
  cout << "v2's size: " << v2.size() << endl;
  v2.push_back(1);  // now the vector is {1}
  cout << "v2's size: " << v2.size() << endl;
  v2.push_back(2);  // now the vector is {1}
  cout << "v2's size: " << v2.size() << endl;
  v2.push_back(3);  // now the vector is {1}
  cout << "v2's size: " << v2.size() << endl;
  for (int i = 0; i < v2.size(); i++) {
    cout << v2.at(i) << endl;
  }

  // a vector of size 314 holding nothing but 3.14s
  vector<double> v3(314, 3.14);
  cout << v3.size() << endl;
  cout << v3.at(120) << endl;

  // let's get as many ints from the user as they want to type
  // -1 will signal the end
  vector<int> usersInput;  // initially empty
  cout << "Please enter the next value: ";
  int currentInput;
  cin >> currentInput;
  while (currentInput != -1) {
    // put currentInput inside the vector
    usersInput.push_back(currentInput);
    // ask for the next value
    cout << "Please enter the next value: ";
    cin >> currentInput;
  }
  // once we get here, the user must've typed -1
  // let's print out what the user entered
  cout << "You entered: ";
  for (int i = 0; i < usersInput.size(); i++) {
    cout << usersInput.at(i) << " ";
  }
  cout << endl;

  return 0;
}
