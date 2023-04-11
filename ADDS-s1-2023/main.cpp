#include <iostream>
#include <sstream>
#include <vector>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"

int main() {
  std::string input;
  std::getline(std::cin, input);

  std::vector<int> list;
  std::istringstream iss(input);

  int num;
  while (iss >> num) {
    list.push_back(num);
  }

  QuickSort qs;
  RecursiveBinarySearch rbs;

  std::vector<int> new_list = qs.sort(list);  // quick sort (return list)

  // search 1 and print true or false and the list
  bool found = rbs.search(new_list, 1);  // binary search (return bool)
  std::cout << (found ? "true" : "false") << " ";

  for (int i : new_list) {
    std::cout << i << " ";
  }

  return 0;
}
