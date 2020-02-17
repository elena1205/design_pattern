
#include <iostream>
#include "sort_method.h"
#include "sort_method_insert.h"

void SortInsert::sortData(int d[], int start, int end) {
    // std::cout << "sortInsert sortData " << std::endl;
    for (int i = 1; i <= end; i++) {
        int key = d[i];
        int keypos = i;
        for (int j = i - 1; j >= 0; j--) {
            if (d[j] > key) {
                d[keypos] = d[j];
                keypos = j;
            }
        }
        d[keypos] = key;
    }
}