// g++ -std=c++17 main.cpp countwords.cpp -o main

#include <cctype>  // isspace function
#include <iostream>
#include <string>
using namespace std;

#include "countwords.h"

int main() {
  string s;
  getline(cin, s);

  cout << countWords(s) << endl;

  return 0;
}
