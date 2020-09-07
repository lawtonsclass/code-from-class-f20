#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3};
  // want to swap indices 0 and 2

  // you need to save the 0th element before you replace it
  // (you lose that number otherwise)
  int temp = arr[0];
  arr[0] = arr[2];
  arr[2] = temp;

  for (int i = 0; i < 3; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}
