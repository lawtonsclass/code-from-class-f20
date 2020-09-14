#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  stack<string> backButton;
  // first we make a new tab and go to google
  backButton.push("google.com");
  // then we search google for c++ stack
  backButton.push("google.com/search/stack...");
  backButton.push("C++ docs");  // dead end; let's go back to the search page
  backButton.pop();
  backButton.push("stackoverflow");

  while (!backButton.empty()) {
    cout << "current webpage: " << backButton.top() << endl;
    cout << "pressing back button...\n";
    backButton.pop();
  }

  return 0;
}
