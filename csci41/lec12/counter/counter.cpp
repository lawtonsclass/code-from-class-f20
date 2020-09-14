#include "counter.h"

// O(1)
Counter::Counter() { count = new int; }

// O(1)
int Counter::getCount() const { return *count; }

// O(1)
void Counter::operator++() { *count = *count + 1; }

// O(1)
Counter::~Counter() {
  delete count;  // get rid of the thing on the heap
}

// O(1)
Counter::Counter(const Counter& other) {
  // deep copy
  // make a new place on the heap for our count
  /* count = other.count; // this would be a shallow copy--we don't want this */

  count = new int;
  *count = *other.count;
}

// O(1)
Counter& Counter::operator=(const Counter& other) noexcept {
  // check for self assignment
  if (this == &other) return *this;

  count = new int;
  *count = *other.count;

  return *this;
}
