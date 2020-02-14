#include <iostream>
#include <stack>
#include <vector>
#include "sortmethod.h"

void sortmethod::printData(int d[], int len, std::string tips) {
    std::cout << "after " << tips << std::endl;

    for (size_t i = 0; i < len; i++) {
        std::cout<< d[i] << " " ;
    }
    std::cout << std::endl;
}

void sortBubble::sortData(int d[], int start, int end) {
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

void sortSelect::sortData(int d[], int start, int end) {
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

void sortInsert::sortData(int d[], int start, int end) {
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

void sortShell::sortData(int d[], int start, int end) {
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

int sortQuick::getPartition(int d[], int start, int end) {
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

void sortQuick::sortData(int d[], int start, int end) {
    if ( start >= end) {
        return;
    }
    int i = getPartition(d, start, end);
    sortData(d, start, i - 1);
    sortData(d, i + 1, end);
}

void sortQuick::sortDataRecursive(int d[], int start, int end) {
    if ( start >= end) {
        return;
    }
    int i = getPartition(d, start, end);
    sortData(d, start, i - 1);
    sortData(d, i + 1, end);
}

void sortQuick::sortDataIterative(int d[], int start, int end) {
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


void sortMerge::mergePartition(int d[], int start, int mid, int end) {
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

void sortMerge::sortData(int d[], int start, int end) {
    if (start < end) {
        int mid = (start + end) >> 1;
        sortData(d, start, mid);
        sortData(d, mid + 1, end);
        mergePartition(d, start, mid, end);
    }
}

void sortMerge::sortDataIterative(int d[], int start, int end) {
    for (int i = 1; i <= end; i++) {
        for (int j = start; j < end; j+=2*i) {
            int mid = (j + 2*i - 1) >> 1;
            mergePartition(d, j, mid, j + i);
        }
    }
}

#define LEFT(i)     (((i) << 1) + 1)
#define RIGHT(i)    (((i) + 1) << 1)
#define PARENT(i)   (((i) - 1) >> 1)

void sortHeap::sortData(int d[], int start, int end) {
    buildHeap(d, end + 1);
    for (int i = end + 1; i > 1; i--) {
        int tmp = d[0];
        d[0] = d[i - 1];
        d[i - 1] = tmp;
        adjustHeap(d, i - 1, 0);
    }
}

void sortHeap::buildHeap(int d[], int len) {
    // 从最后一个父节点开始
    for (int i = PARENT(len - 1); i >= 0; i--) {
        adjustHeap(d, len, i);
    }
}

void sortHeap::adjustHeap(int d[], int len, int cur) {

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