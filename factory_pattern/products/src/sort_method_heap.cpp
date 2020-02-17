
#include <iostream>
#include "sort_method.h"
#include "sort_method_heap.h"


#define LEFT(i)     (((i) << 1) + 1)
#define RIGHT(i)    (((i) + 1) << 1)
#define PARENT(i)   (((i) - 1) >> 1)

void SortHeap::sortData(int d[], int start, int end) {
    buildHeap(d, end + 1);
    for (int i = end + 1; i > 1; i--) {
        int tmp = d[0];
        d[0] = d[i - 1];
        d[i - 1] = tmp;
        adjustHeap(d, i - 1, 0);
    }
}

void SortHeap::buildHeap(int d[], int len) {
    // 从最后一个父节点开始
    for (int i = PARENT(len - 1); i >= 0; i--) {
        adjustHeap(d, len, i);
    }
}

void SortHeap::adjustHeap(int d[], int len, int cur) {

    if ( cur >= len || cur < 0 )
        return;

    int left = LEFT(cur);
    int right = RIGHT(cur);

    int largest = cur;

    if (left < len && d[left] > d[largest]) {
        largest = left;
    }
    if (right < len && d[right] > d[largest]) {
        largest = right;
    }

    if (largest == cur) {
        return;
    }

    int tmp = d[cur];
    d[cur] = d[largest];
    d[largest] = tmp;
    adjustHeap(d, len, largest);
}