#include <iostream>
#include <memory>
using namespace std;

int main() {
  unique_ptr<int> ip = make_unique<int>(42);

  // you can't copy a unique_ptr!
  // it makes sure you only have one ptr pointing to this thing
  // unique_ptr<int> ip2 = ip;

  cout << *ip << endl;  // just like a normal pointer

  unique_ptr<int> ip2;
  cout << ip2.get() << endl;   // default is null!
  /* cout << *ip2 << endl; */  // you can still segfault

  // ip's memory will be deleted automatically at the end of its scope
  // (i.e., the } closing brace of main)
  ip.release();
  cout << ip.get() << endl;  // you can't double free, since .release() sets the
                             // pointer to nullptr!!!

  return 0;
}
