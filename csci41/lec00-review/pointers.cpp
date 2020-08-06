// p will be a reference to x when we call it below
void blah(int* p) { (*p)++; }

// now you can't modify x when it's passed!
// this saves tons of memory (when you use it with larger types)
int blahConst(const int* p) { return *p + 1; }

int main() {
  int x = 42;
  blah(&x);       // x is now 43
  blahConst(&x);  // can't change x
  return 0;
}
