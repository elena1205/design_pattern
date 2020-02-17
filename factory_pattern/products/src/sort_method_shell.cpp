
#include <iostream>
#include "sort_method.h"
#include "sort_method_shell.h"

void SortShell::sortData(int d[], int start, int end) {
    // std::cout << "sortShell sortData " << std::endl;
    int gap = end + 1;
    while (true) {
        gap = gap / 2;
        for (int i = 1; i <= end; i+=gap) {
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
        if (1 == gap) {
            break;
        }
    }
    
}
