#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 11; i++) {
    if (i == 3) {
      continue;  // skips the rest of the body--goes straight into a new
                 // iteration
    }
    cout << i << endl;
  }

  cout << endl;

  int j = 42;
  while (true) {  // potentially infinite loop
    cout << "Enter a character (q to quit): ";
    char choice;
    cin >> choice;

    if (choice == 'q') {
      break;  // stops the while loop--goes straight to the end
    }

    cout << j << endl;
    j++;
  }
  cout << "This gets executed after break is called\n";

  return 0;
}
