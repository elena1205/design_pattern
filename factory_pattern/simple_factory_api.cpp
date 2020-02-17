#include <iostream>
#include <memory>
#include "sort_method.h"
#include "simple_factory.h"

void implSimpleFactory() {
    const int len = 15;
    int data[len] = {};
    SortType typeArr[] = {SortType::SortBubble,
                          SortType::SortSelect,
                          SortType::SortInsert,
                          SortType::SortShell,
                          SortType::SortQuick,
                          SortType::SortMerge,
                          SortType::SortHeap,
                          };

    SimpleFactory factory;

    for (size_t i = 0; i < sizeof(typeArr) / sizeof(SortType); i++) {
        auto method = factory.GenerateSortMethod(typeArr[i]);
        if (method != nullptr) {
            method->generateRandomData(data, len);
            method->sortData(data, 0, len - 1);
            method->printData(data, len, factory.sorttypeToString(typeArr[i]));
        }
    }
}
