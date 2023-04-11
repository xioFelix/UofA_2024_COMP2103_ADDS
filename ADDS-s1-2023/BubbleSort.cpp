// Swap positions in pairs, the smaller one forward
// pseudo-code:
// function bubble_sort (array, length) {
//     var i, j;
//     for(i from 0 to length-1){
//         for(j from 0 to length-1-i){
//             if (array[j] > array[j+1])
//                 swap(array[j], array[j+1])
//         }
//     }
// }

#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){
    int n = list.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (list[j] > list[j+1]) {
                std::swap(list[j], list[j+1]);
            }
        }
    }
    return list;
}