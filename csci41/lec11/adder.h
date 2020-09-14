// the one weird thing about templates is that you can't separate the
// class definition from the implementation
// Everything below needs to get #include-d for templates to work

template <class T>
class Adder {
 public:
  // constructor
  Adder(T x, T y);
  // return the sum of x and y
  T add();

 private:
  T x;
  T y;
};

// the name of the class is not Adder, it's Adder<T>
// A separate class will get made for each type you use

template <class T>
Adder<T>::Adder(T x, T y) : x(x), y(y) {}

template <class T>
T Adder<T>::add() {
  return x + y;
}
