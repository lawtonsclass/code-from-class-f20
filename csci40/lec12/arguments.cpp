#include <iostream>
using namespace std;

// this is call-by-value
// we passed an argument, and it got copied into our x local variable
void foo(int x)
// inter-function dreamland: int x = y // a new place in memory
// this is why we get a copy of main's y in x--it's a brand new var
{
  x++;
}

// this is call-by-reference
// we passed an argument, and we made an alias to it in our x local variable
void bar(int& x)
// inter-function dreamland: int& x = y
// this is how we can modify main's y
{
  x++;
}

int main() {
  int y = 42;
  foo(y);
  cout << y << endl;
  bar(y);
  cout << y << endl;

  return 0;
}
