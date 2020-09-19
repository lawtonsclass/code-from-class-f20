#include <iostream>
#include <string>
using namespace std;

struct Student {
  int graduationYear;
  string name;
  double gpa;
  int id;
  string campus;
};

int main() {
  Student l;
  l.graduationYear = 2020;
  l.name = "Lawton Nichols";
  l.id = 8675309;
  l.gpa = 3.33;
  l.campus = "CCC";

  cout << l.name << ": " << l.id << endl;

  return 0;
}
