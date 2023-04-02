#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include "Finder.cpp"

using namespace std;
using namespace chrono;

int main() {
  Finder finder;
  string s1, s2;
  vector<int> result;
  ifstream infile("data.txt");

  // Read data from file
  if (infile) {
    getline(infile, s1);
    getline(infile, s2);
  } else {
    cerr << "Error: failed to open input file" << endl;
    return -1;
  }

  // Measure execution time of findSubstrings function
  auto start = high_resolution_clock::now();
  result = finder.findSubstrings(s1, s2);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);

  // Print results
  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;
  cout << "Result: ";
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
  cout << "Execution time: " << duration.count() << " microseconds" << endl;

  return 0;
}
