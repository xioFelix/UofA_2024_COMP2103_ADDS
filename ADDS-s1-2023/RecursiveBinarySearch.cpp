#include "RecursiveBinarySearch.h"

#include <vector>

bool RecursiveBinarySearch::search(std::vector<int> sortlist, int element) {
  return binarySearch(sortlist, element, 0, sortlist.size() - 1);
}

bool RecursiveBinarySearch::binarySearch(std::vector<int> sortlist, int element,
                                         int start, int end) {
  if (start > end) {
    return false;
  }
  int mid = start + (end - start) / 2;
  if (sortlist[mid] == element) {
    return true;
  } else if (sortlist[mid] < element) {
    return binarySearch(sortlist, element, mid + 1, end);
  } else if (sortlist[mid] > element) {
    return binarySearch(sortlist, element, start, mid - 1);
  }
  return true;
}
