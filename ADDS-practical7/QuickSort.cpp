#include "QuickSort.h"
#include <vector>
using namespace std;

QuickSort::QuickSort()
{

}


void QuickSort::sort(vector<int> &list, int lower, int upper)
{
    if (lower < upper)
    {
        int pivot_index = (lower + upper) / 2;
        int new_pivot = Split(list, lower, upper, pivot_index);
        sort(list, lower, new_pivot - 1);
        sort(list, new_pivot + 1, upper);
    }
}


int QuickSort::Split(vector<int> &list, int lower, int upper, int pivot_index)
{
    int new_pivot = lower;
    int pivot_value = list.at(pivot_index);

    swap(list.at(pivot_index), list.at(upper));

    for (int i = lower; i <= upper - 1; i++)
    {
        if (list.at(i) <= pivot_value)
        {
            swap(list.at(i), list.at(new_pivot));
            new_pivot++;
        }
    }

    swap(list.at(new_pivot), list.at(upper));

    return new_pivot;
}


QuickSort::~QuickSort()
{

}