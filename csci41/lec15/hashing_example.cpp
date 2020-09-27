#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

struct Pair {
  string key;
  int val;
};

int hashString(const string& s) { return 0; }

void insertIntoHashTable(vector<list<Pair>>& v, const string& key, int val) {
  // we first need to hash our key to get the index to store things at
  int idx = hashString(key);

  // figure out first if they already exists in the table
  for (Pair& p : v.at(idx)) {
    if (p.key == key) {
      // just change the value and we're done
      p.val = val;
      return;
    }
  }

  // otherwise, if the key wasn't in the list already, add a new node

  // then store they (key, val) pair at that index of the hash table
  Pair p = {key, val};
  // equivalent to: Pair p; p.key = key; p.val = val;
  v.at(idx).push_back(p);
}

// return -1 if not found
int lookupInHashTable(vector<list<Pair>>& v, const string& key) {
  // go to the index in v where key is hashed to
  int idx = hashString(key);
  list<Pair>& l = v.at(idx);
  // go through l and find our key
  for (Pair& p : l) {
    // if we find the key, return the val
    if (p.key == key) return p.val;
  }
  // it wasn't there
  return -1;
}

int main() {
  vector<list<Pair>> v(3);  // my hash table

  insertIntoHashTable(v, "Mom", 5555555);
  insertIntoHashTable(v, "Lawton", 8675309);

  cout << lookupInHashTable(v, "Mom") << endl;
  cout << lookupInHashTable(v, "Lawton") << endl;
  cout << lookupInHashTable(v, "Lawton's cat") << endl;

  insertIntoHashTable(v, "Lawton", 8675310);
  cout << lookupInHashTable(v, "Lawton") << endl;

  return 0;
}
