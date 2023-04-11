// Sets the tag element.
// If numbers are larger than the tag element, place it at the right.
// If it is less than tag element, place it at the left.
// Then sort the left and the right.

#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> sortlist) {
  // set key value
  int n = sortlist.size();
  if (n <= 1) {
    return sortlist;
  }
  int pivot;
  if (n == 2) {
    pivot = sortlist[0];
  } else {
    pivot = sortlist[2];  // keep choosing the third value
  }

  std::vector<int> left, right, equal;
  for (int i : sortlist) {  // i=sortlist[i]
    if (i < pivot) {
      left.push_back(i);
    } else if (i > pivot) {
      right.push_back(i);
    } else {
      equal.push_back(i);
    }
  }

  std::vector<int> sorted_left = sort(left);
  std::vector<int> sorted_right = sort(right);
  // insert equal and sort_right into the end of sort_left
  sorted_left.insert(sorted_left.end(), equal.begin(), equal.end());
  sorted_left.insert(sorted_left.end(), sorted_right.begin(),
                     sorted_right.end());

  return sorted_left;
}