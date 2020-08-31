#include <iostream>
using namespace std;

int main() {
  int arr[10];  // make space for 10 ints inside arr
  cout << "Enter 10 numbers: ";

  for (int i = 0; i < 10; i++) {
    // cin at index i
    cin >> arr[i];
  }

  // now our array has 10 things in it

  // let's print them out
  cout << "The 10 things you entered were: ";
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // let's calculate the sum of the 10 numbers
  int sum = 0;  // we accumulate the summation inside the sum variable
  for (int i = 0; i < 10; i++) {
    sum = sum + arr[i];
  }
  cout << "The sum: " << sum << endl;

  // our first guess for the minimum is the first value (at index 0)
  int min = arr[0];
  // go through the rest of the array to see if our minimum should
  // update
  for (int i = 1; i < 10; i++) {
    // check and see if our min is still the correct min
    // (i.e., it should be smaller than the element we're looking at)
    if (min < arr[i]) {
      // do nothing; min doesn't need to change
    } else {
      // otherwise, we have found a better guess for the minimum
      min = arr[i];
    }
  }
  // once we're done with this loop, we must've seen the minimum and
  // min is set to it
  cout << "min: " << min << endl;

  // NEVER EVER DO THIS!!!
  cout << arr[10] << endl;

  return 0;
}
