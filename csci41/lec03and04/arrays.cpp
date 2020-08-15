#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3};
  // arr by itself is the address of the start of the array
  cout << arr << endl;

  int* p = arr;          // p also points to the start of the array
  cout << p[1] << endl;  // *same as* arr[1]

  int* heap_arr = new int[42];
  heap_arr[0] = 1;
  heap_arr[1] = 2;

  // once you're done with the array, delete[] it
  delete[] heap_arr;

  return 0;
}
