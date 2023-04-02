#include <iostream>
#include <unordered_map>
using namespace std;

int fib(int n) {
  // create a static table for recording values
  static unordered_map<int, int> fib_values;
  unordered_map<int, int>::iterator it;

  cout << "calculating fib " << n << endl;
  // check table to see if already calculated
  it = fib_values.find(n);
  // if found, return the answer
  if (it != fib_values.end()) return it->second;

  // didn't find it. recursively calculate fib(n)
  // and store the value in the table

  // base case
  if (n == 0 || n == 1) {
    fib_values.insert(pair<int, int>(n, n));
    return n;
  }

  // recursive case
  int result = fib(n - 1) + fib(n - 2);
  fib_values.insert(pair<int, int>(n, result));
  return result;
}

int main(void) {
  int n;
  cin >> n;
  int result = fib(n);
  cout << result << endl;
  cin >> n;
  result = fib(n);
  cout << result << endl;
}