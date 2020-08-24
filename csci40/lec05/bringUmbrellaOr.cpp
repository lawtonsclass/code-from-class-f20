#include <iostream>
using namespace std;

int main() {
  cout << "Is it currently raining? ";
  string yesOrNo1;
  cin >> yesOrNo1;

  cout << "Is there a chance of rain? ";
  string yesOrNo2;
  cin >> yesOrNo2;

  // if the user answered "yes" to either of those questions, then we
  // should avise them to bring an umbrella

  // alteranatively, you could have said yesOrNo1 != "yes"
  if (!(yesOrNo1 == "yes")) {
    cout << "You said it's not currently raining.\n";
  }

  if (yesOrNo1 == "yes" || yesOrNo2 == "yes") {
    cout << "You should bring an umbrella!\n";
  } else {
    cout << "You probably don't need an umbrella.\n";
  }

  return 0;
}
