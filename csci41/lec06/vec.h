#ifndef VEC_H
#define VEC_H

#define vector YoureNotAllowedToUseStdVector

class Vec {
 public:
  Vec();
  ~Vec();
  Vec(const Vec& other);
  Vec& operator=(const Vec& other) noexcept;
  void push_back(int x);
  int size() const;
  int& at(int i);
  void sort();

 private:
  void resize();

  // this is the one thing that we have on the heap and need to worry
  // about
  int* arr;
  int numItems;
  int capacity;
};

#endif /* VEC_H */
