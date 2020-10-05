#include <iostream>
using namespace std;

// this variable lives as long as the program is running, and you can
// use it in any function
int this_is_a_global_var = 3;
int huge_array[1000];

void foo() {
  // x only lives for the life of the foo function
  // x is a *local* variable
  int x;
}

int* bar() {
  int* n = new int;  // make an int on the heap
  *n = 42;
  cout << *n << endl;
  return n;
}

int main() {
  foo();

  // bar returns back the address of the new int
  int* int_pointer = bar();
  *int_pointer = 43;
  cout << *int_pointer << endl;

  // now, we're done with the int we made on the heap; let's delete it
  delete int_pointer;

  for (int i = 0; i < 10000; i++) {
    int* ip = new int;  // make a new int on the heap
    delete ip;
    // we lose access to ip in between loop bodies
  }

  int arr[42] = {1, 2, 3};  // local array (not made on heap)
  cout << arr << endl;
  cout << *arr << endl;
  cout << *(arr + 1) << endl;

  int* p = arr;          // p points to the beginning of arr
  cout << p[1] << endl;  // I can use a pointer like an array!!!

  return 0;
}
