#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {
public:
    bool search(std::vector<int> list, int element);
    bool binarySearch(std::vector<int> list, int element, int start, int end);
};
#endif