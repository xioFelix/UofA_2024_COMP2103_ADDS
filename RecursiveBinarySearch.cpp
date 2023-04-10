#include "RecursiveBinarySearch.h"

#include <cstdlib>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch() {}

bool RecursiveBinarySearch::search(std::vector<int> data, int key, int lower,
                                   int upper) {
  if (lower > upper) {
    return -1;  // Boundary case, if lower is ever greater than upper we have
  }

  int midpoint = (lower + upper) / 2;

  if (data.at(midpoint) > key) {
    return search(
        data, key, lower,
        midpoint - 1);  // Call binary search on the 'left' side of the vector
  } else if (data.at(midpoint) < key) {
    return search(
        data, key, midpoint + 1,
        upper);  // Call binary search on the 'righ' side of the vector
  } else {
    return midpoint;
  }
}

RecursiveBinarySearch::~RecursiveBinarySearch() {}
