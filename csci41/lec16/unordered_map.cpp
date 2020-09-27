#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> m;

  m.emplace("Mom", 5555555);
  m.emplace("Lawton", 8675309);

  if (m.count("Mom") > 0) cout << m.at("Mom") << endl;
  if (m.count("Lawton") > 0) cout << m.at("Lawton") << endl;
  if (m.count("Lawton's cat") > 0) cout << m.at("Lawton's cat") << endl;

  // if the key is already there, we have to use .at
  m.at("Lawton") = 8675310;
  if (m.count("Lawton") > 0) cout << m.at("Lawton") << endl;

  for (unordered_map<string, int>::iterator it = m.begin(); it != m.end();
       it++) {
    // it->first is the key, it->second is the value
    cout << it->first << " -> " << it->second << endl;
  }

  return 0;
}
