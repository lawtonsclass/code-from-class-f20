#include <iostream>
using namespace std;

int main() {
  cout << "Is it cloudy today? ";
  string yesOrNo1;
  cin >> yesOrNo1;

  cout << "Is there a chance of rain? ";
  string yesOrNo2;
  cin >> yesOrNo2;

  if (yesOrNo1 == "yes" && yesOrNo2 == "yes") {
    cout << "You should bring an umbrella!\n";
  } else {
    cout << "You probably don't need an umbrella.\n";
  }

  return 0;
}
