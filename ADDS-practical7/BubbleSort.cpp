#include "BubbleSort.h"

#include <vector>

using namespace std;

BubbleSort::BubbleSort() {}

void BubbleSort::sort(vector<int> &list) {
  bool wasSwap = 0;
  for (int i = 0; i < list.size(); i++) {
    for (int j = 0; j < list.size() - 1; j++) {
      if (list.at(j) > list.at(j + 1)) {
        swap(list.at(j), list.at(j + 1));
        wasSwap = 1;
      }
    }

    if (!wasSwap) {
      break;
    }
  }
}

BubbleSort::~BubbleSort() {}