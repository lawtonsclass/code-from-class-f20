#ifndef COUNTER_H
#define COUNTER_H

class Counter {
 public:
  Counter();
  ~Counter();
  Counter(const Counter& other);
  Counter& operator=(const Counter& other) noexcept;
  int getCount() const;
  void operator++();

 private:
  int* count;  // pointer into the heap
};

#endif /* end of include guard: COUNTER_H */
