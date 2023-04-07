#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
#include <vector>

class BubbleSort: public Sort
{
public:
    BubbleSort();
    void sort(std::vector<int> &list);
    ~BubbleSort();

};
#endif //BUBBLESORT_H