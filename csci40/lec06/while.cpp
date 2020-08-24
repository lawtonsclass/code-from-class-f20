#include <iostream>
using namespace std;

int main() {
  // print the #s from 1 to 10
  // we don't want to have to do:
  /* cout << 1 << endl; */
  /* cout << 2 << endl; */
  /* cout << 3 << endl; */
  /* ... */

  int i = 1;  // naming this variable i is customary
  // it stands for "iteration variable"
  // loops "iterate"
  while (i <= 10) {
    // print my current value of i
    cout << i << endl;
    // increment i to get ready for the next iteration of this loop
    i++;
  }

  // once we get here, i = 11
  cout << "last value of i: " << i << endl;

  // now, let's sum the numbers from 1 to 10
  // let's use j instead of i
  int j = 1;
  int sum = 0;
  // so j will be allowed to range between 1 and 10, inclusive
  while (j <= 10) {
    // add j into sum
    sum += j;  // equiv. to sum = sum + j;
    // advance j to be the next number
    j++;
  }
  // if this loop stopped, *we know* that the condition must now be
  // false. So, !(j <= 10) is true. i.e., j > 10
  cout << "sum is: " << sum << endl;
  cout << "last value of j: " << j << endl;

  return 0;
}
