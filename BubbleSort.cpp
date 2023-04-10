#include "BubbleSort.h"

#include <vector>

using namespace std;

BubbleSort::BubbleSort() {}

void BubbleSort::sort(vector<int> &list) {
  bool judge = 0;
  for (int i = 0; i < list.size(); i++) {
    for (int j = 0; j < list.size() - 1; j++) {
      if (list.at(j) > list.at(j + 1)) {
        swap(list.at(j), list.at(j + 1));
        judge = 1;
      }
    }

    if (!judge) {
      break;
    }
  }
}

BubbleSort::~BubbleSort() {}