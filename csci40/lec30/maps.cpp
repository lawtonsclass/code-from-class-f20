#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <utility>  // for pair
using namespace std;

int main() {
  map<string, int> phoneBook;
  // let's insert keys and values in our phonebook
  phoneBook.emplace("Lawton", 8675309);
  phoneBook.emplace("Lawton's cat", 8675311);
  phoneBook.emplace("Lawton's mom", 8675310);

  // we can look up the phone # of any of the people stored inside the
  // map (using their names, since names are the keys)

  // it's good practice to ensure that the key exists in the map
  // before looking up its associated value
  if (phoneBook.count("Lawton") != 0) {
    cout << phoneBook.at("Lawton") << endl;
  }

  try {
    cout << phoneBook.at("Lawton's dad") << endl;
  } catch (out_of_range& e) {
    cout << "the key \"Lawton's dad\" doesn't exist in the map!\n";
  }

  cout << phoneBook.at("Lawton's cat") << endl;

  // strings are ordered in dictionary order, and that's the order of
  // things you get back when you iterate through a map

  for (map<string, int>::iterator it = phoneBook.begin(); it != phoneBook.end();
       it++) {
    // it is a pair! It's first element is the key, and its second
    // element is the value
    cout << it->first << ": " << (*it).second << endl;
  }

  for (pair<string, int> p : phoneBook) {
    cout << p.first << ": " << p.second << endl;
  }

  for (auto p : phoneBook) {
    cout << p.first << ": " << p.second << endl;
  }

  return 0;
}
