#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    vector<int> input;
    string entry;
    getline(cin, entry);
    istringstream out(entry);
    int value;
    while (out >> value)
    {
        input.push_back(value);
    }

    BubbleSort myb;
    myb.sort(input);
    QuickSort myq;
    myq.sort(input, 0, input.size() - 1);

    RecursiveBinarySearch mybin;
    int found = mybin.search(input, 0, 0, input.size() - 1);
    if (found >= 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    for(unsigned int i = 0; i < input.size(); i++)
    {
        cout << " " << input.at(i);
    }
}