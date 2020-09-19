#include <iostream>
#include <stack>
using namespace std;

/* Push */
/* Push to s1 */
/* Pop */
/* Pops from s2 if s2 has an element */
/* If there’s nothing in s2, pop everything from s1 and push it into s2. Then
 * proceed as above. */
/* Front */
/* Gets the top of s2 if s2 has an element */
/* If there’s nothing in s2, pop everything from s1 and push it into s2. Then
 * proceed as above. */
/* Empty */
/* If both are empty */

template <class T>
class WeirdQueue {
 public:
  void push(T t) { s1.push(t); }
  void pop() {
    if (!s2.empty()) {
      s2.pop();
    } else {
      // bring everything over from s1
      while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
      }
      // now s1 is reversed onto s2
      s2.pop();
    }
  }

  T& front() {
    if (!s2.empty()) {
      return s2.top();
    } else {
      // bring everything over from s1
      while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
      }
      // now s1 is reversed onto s2
      return s2.top();
    }
  }

  bool empty() { return s1.empty() && s2.empty(); }

 private:
  stack<T> s1;
  stack<T> s2;
};

int main() {
  WeirdQueue<int> q;
  q.push(3);
  q.push(2);
  cout << q.front() << endl;
  q.pop();
  q.push(1);
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  q.pop();
  cout << q.empty() << endl;
}
