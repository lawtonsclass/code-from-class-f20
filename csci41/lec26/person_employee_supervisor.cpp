#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
 public:
  Person(string name, int age) : name(name), age(age) {}
  virtual string to_string() const { return name + " " + std::to_string(age); }

 protected:
  string name;
  int age;
};

class Employee : public Person {
 public:
  Employee(string name, int age, double salary, int employee_ID)
      : Person(name, age), salary(salary), employee_ID(employee_ID) {}
  string to_string() const override {
    // attach salary and employee_ID to the Person::to_string result
    return Person::to_string() + " " + std::to_string(salary) + " " +
           std::to_string(employee_ID);
  }

 protected:
  double salary;
  int employee_ID;
};

class Supervisor : public Employee {
 public:
  Supervisor(string name, int age, double salary, int employee_ID,
             const vector<Employee*>& supervising)
      : Employee(name, age, salary, employee_ID), supervising(supervising) {}

  string to_string() const override {
    string res = Employee::to_string();

    // add the employees the supervisor is supervising
    for (Employee* e : supervising) {
      res += "\n\t" + e->to_string();
    }

    return res;
  }

 protected:
  vector<Employee*> supervising;
};

int main() {
  Employee lawton("Lawton", 28, 3.14, 8675309);
  Employee lonzo("Alonzo", 0, 1000000, 8675310);
  Supervisor bill("Bill", 29, 1000000000, 8675308, {&lawton, &lonzo});

  cout << lawton.to_string() << endl;
  cout << lonzo.to_string() << endl;
  cout << bill.to_string() << endl;

  return 0;
}
