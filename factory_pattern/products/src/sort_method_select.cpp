
#include <iostream>
#include "sort_method.h"
#include "sort_method_select.h"

void SortSelect::sortData(int d[], int start, int end) {
    // std::cout << "sortSelect sortData " << std::endl;
    int pos = start;
    for (size_t i = 0; i < end; i++) {
        pos = i;
        for (size_t j = i + 1; j <= end; j++) {
            if (d[j] < d[pos]) {
                pos = j;
            }
        }
        if (pos > i) {
            int tmp = d[i];
            d[i] = d[pos];
            d[pos] = tmp;
        }
    }
}