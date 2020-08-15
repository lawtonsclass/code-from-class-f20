#include <iostream>
using namespace std;

int main() {
  cout << "Enter a day: ";
  string day;
  cin >> day;

  // this tries a bunch of alternatives, and stops once it reaches an
  // alternative where the condition is true
  if (day == "Monday") {
    cout << "Mon\n";
  } else {
    if (day == "Tuesday") {
      cout << "Tue\n";
    } else {
      if (day == "Wednesday") {
        cout << "Wed\n";
      } else {
        if (day == "Thursday") {
          cout << "Thu\n";
        } else {
          cout << "I'm tired of all this nesting." << endl;
        }
      }
    }
  }

  // the alternative doesn't involve as much nesting
  if (day == "Monday") {
    cout << "Mon\n";
  } else if (day == "Tuesday") {  // this is the next condition to try
    cout << "Tue\n";
  } else if (day == "Wednesday") {
    cout << "Wed\n";
  } else if (day == "Thursday") {
    cout << "Thu\n";
  } else if (day == "Friday") {
    cout << "Fri\n";
  } else if (day == "Saturday") {
    cout << "Sat\n";
  } else {  // If we got here (and the user didn't make a mistake), it's Sun
    cout << "Sun\n";
  }

  return 0;
}
