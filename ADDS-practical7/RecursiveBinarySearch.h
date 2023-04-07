#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

using namespace std;

class RecursiveBinarySearch
{
    public:
        RecursiveBinarySearch();
        bool search(std::vector<int>, int, int, int);
        ~RecursiveBinarySearch();

    private:
        int start;
        int end;

};
#endif