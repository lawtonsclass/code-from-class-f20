#include <iostream>
using namespace std;

int main() {
  int multi_uninit[4][4];  // this is an ininitialized multidimensional array
  // a 3x3 initialized multidimensional array
  int multi_init[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      // inside here, I have an (i, j) pair that can index into
      // multi_init
      cout << multi_init[i][j] << " ";
    }
    cout << endl;
  }

  // the following tries to access memory that doesn't belong to the
  // program
  /* int arr[42]; */
  /* cout << arr[4096] << endl; */

  return 0;
}
