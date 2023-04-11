// Check the middle element in the array.
// 1. find this element -> return the index
// 2. less than the middle element -> check the left
// 3. more than the middle element -> check the right
// repeate

#include <vector>
#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int element) {
    return binarySearch(list, element, 0, list.size()-1);
}

bool RecursiveBinarySearch::binarySearch(std::vector<int> list, int element, int start, int end) {
    if (start > end) {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (list[mid] == element){
        return true;
    } else if (list[mid] < element){
        return binarySearch(list, element, mid+1, end);
    } else if (list[mid] > element) {
    return binarySearch(list, element, start, mid-1);
    }
    return true;
}
