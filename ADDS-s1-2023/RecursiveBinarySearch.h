#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {
 public:
  bool search(std::vector<int> sortlist, int element);
  bool binarySearch(std::vector<int> sortlist, int element, int start, int end);
};
#endif