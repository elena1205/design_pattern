#include <iostream>
#include "sort_method.h"
#include "sort_method_merge.h"




void SortMerge::mergePartition(int d[], int start, int mid, int end) {
    int left = start;
    int right = mid + 1;
    int pos = 0;
    int tmp[end - start + 1] = {0};

    while (left <= mid && right <= end) {
        if (d[left] < d[right]) {
            tmp[pos++] = d[left];
            left++;
        } else {
             tmp[pos++] = d[right];
             right++;
        }
    }
    while (left <= mid) {
        tmp[pos++] = d[left++];
    }
    while (right <= end) {
        tmp[pos++] = d[right++];
    }

    pos = 0;
    for (size_t i = start; i <= end; i++) {
        d[i] = tmp[pos++];
    }
    
}

void SortMerge::sortData(int d[], int start, int end) {
    if (start < end) {
        int mid = (start + end) >> 1;
        sortData(d, start, mid);
        sortData(d, mid + 1, end);
        mergePartition(d, start, mid, end);
    }
}

void SortMerge::sortDataIterative(int d[], int start, int end) {
    for (int i = 1; i <= end; i++) {
        for (int j = start; j < end; j+=2*i) {
            int mid = (j + 2*i - 1) >> 1;
            mergePartition(d, j, mid, j + i);
        }
    }
}
