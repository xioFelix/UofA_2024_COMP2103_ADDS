#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <vector>

#include "Sort.h"

class BubbleSort : public Sort {
 public:
  BubbleSort();
  void sort(std::vector<int> &list);
  ~BubbleSort();
};
#endif  // BUBBLESORT_H