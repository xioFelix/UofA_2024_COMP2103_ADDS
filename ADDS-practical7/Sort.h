#ifndef SORT_H
#define SORT_H
#include <vector>
#include <iostream>

class Sort
{
public:
    std::vector<int> sort(std::vector<int> list);
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

};
#endif