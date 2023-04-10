#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <vector>

class Sort {
 public:
  std::vector<int> sort(std::vector<int> list);
  void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
  }
};
#endif