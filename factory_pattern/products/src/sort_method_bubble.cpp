
#include <iostream>
#include "sort_method.h"
#include "sort_method_bubble.h"

void SortBubble::sortData(int d[], int start, int end) {
    // std::cout << "sortBubble sortData begin " << std::endl;
    int tmp = 0;
    for (size_t i = 0; i <= end; i++) {
        for (size_t j = 0; j <= end - i; j++) {
            if (d[j] > d[j + 1]) {
                tmp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = tmp;    
            }
        }
    }
}