#include <iostream>
#include <stack>
#include "sort_method.h"
#include "sort_method_quick.h"



int SortQuick::getPartition(int d[], int start, int end) {
    int i = start;
    int j = end;
    int key = d[start];
    while (i < j) {
        while (i < j && d[j] > key) {
            j--;
        }
        d[i] = d[j];
        while (i < j && d[i] <= key) {
            i++;
        }
        d[j] = d[i];
    }
    d[i] = key;
    return i;
}



void SortQuick::sortData(int d[], int start, int end) {
    if ( start >= end) {
        return;
    }
    int i = getPartition(d, start, end);
    sortData(d, start, i - 1);
    sortData(d, i + 1, end);
}

void SortQuick::sortDataRecursive(int d[], int start, int end) {
    if ( start >= end) {
        return;
    }
    int i = getPartition(d, start, end);
    sortData(d, start, i - 1);
    sortData(d, i + 1, end);
}

void SortQuick::sortDataIterative(int d[], int start, int end) {
    std::stack<int> st;
    int left = start;
    int right = end; 
    int pos = getPartition(d, start, end);
    if (pos - 1 > start) {
        st.push(pos - 1);
        st.push(start);
    }
    if (pos + 1 < end) {
        st.push(end);
        st.push(pos + 1);
    }

    while (!st.empty()) {
        left = st.top();
        st.pop();
        right = st.top();
        st.pop();
        pos = getPartition(d, left, right);
        if (pos - 1 > left) {
            st.push(pos - 1);
            st.push(left);
        }
        if (pos + 1 < right) {
            st.push(right);
            st.push(pos + 1);
        }
    }
}
