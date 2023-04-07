#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>
#include <iostream>

class QuickSort: public Sort
{
    public:
        QuickSort();
        void sort(std::vector<int> &list, int, int);
        ~QuickSort();

    private:
        int Split(std::vector<int> &list, int, int, int);

};
#endif