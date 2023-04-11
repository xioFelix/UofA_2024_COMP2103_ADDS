#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> sortlist) {
  int n = sortlist.size();
  if (n <= 1) {
    return sortlist;
  }
  int pivot;
  if (n == 2) {
    pivot = sortlist[0];
  } else {
    pivot = sortlist[2];
  }

  std::vector<int> left, right, equal;
  for (int i : sortlist) {
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
  sorted_left.insert(sorted_left.end(), equal.begin(), equal.end());
  sorted_left.insert(sorted_left.end(), sorted_right.begin(),
                     sorted_right.end());

  return sorted_left;
}