#include "counter.h"

// the user doesn't know about this var because it's not in the header
// file
int count;  // global var that keeps track of our current count

void init_counter() { count = 0; }

void reset() { count = 0; }

void inc() { count++; }

void dec() { count--; }

int get_count() { return count; }
