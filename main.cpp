#include <iostream>
#include "Finder.h"
#include "Finder.cpp"
using namespace std;

int main() {
  Finder finder;

  string s1 = "hello world";
  string s2 = "he";

  vector<int> result = finder.findSubstrings(s1, s2);

  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;
  cout << "Result: ";
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
