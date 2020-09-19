#include <iostream>
#include <string>
#include <vector>
using namespace std;

int phone_number_hash(int x) {
  // this function hashes a value x
  return x % 10;
}

void insert_into_vector(vector<string>& v, int key, string val) {
  // HASH the key so that it becomes a valid index into v
  int key_hashed = phone_number_hash(key);
  // insert into v at that location
  v.at(key_hashed) = val;
}

int main() {
  vector<string> v(10000000);  // for phone numbers
  v.at(8675309) = "Lawton";
  v.at(1234567) = "Mom";
  v.at(1875306) = "Dad";
  v.at(5555555) = "Sister";
  v.at(9876543) = "Cat";

  // this is wasting waaaaay too much space!
  cout << v.at(8675309) << endl;

  // how can I store these same numbers using only 10 elements in my
  // vector?!
  // I can "hash" these phone numbers!
  vector<string> v_with_hashing(10);
  insert_into_vector(v_with_hashing, 8675309, "Lawton");
  insert_into_vector(v_with_hashing, 1234567, "Mom");
  insert_into_vector(v_with_hashing, 1875306, "Dad");
  insert_into_vector(v_with_hashing, 5555555, "Sister");
  insert_into_vector(v_with_hashing, 9876543, "Cat");

  cout << v_with_hashing.at(phone_number_hash(8675309)) << endl;

  return 0;
}
