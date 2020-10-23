#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> phoneBook;
  phoneBook.emplace("Lawton", 8675309);
  phoneBook.emplace("Mom", 8675310);

  cout << phoneBook.at("Lawton") << endl;
  cout << phoneBook.count("Dad") << endl;

  return 0;
}
