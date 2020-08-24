#include <iostream>
using namespace std;

int main() {
  // the for loop below is equivalent to:
  /* int i = 1; */
  /* while (i <= 10) { */
  /*   cout << i << endl; */
  /*   i++; */
  /* } */

  for (int i = 1; i <= 10; i++) {
    cout << i << endl;
  }
  // notice that i was defined inside the loop
  // it does not exist outside of it
  /* cout << i << endl; */
  // ^ the above is a compiler error, becuase i is "no longer in scope"

  return 0;
}
