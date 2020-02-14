#include <iostream>
#include <memory>
#include <random>
#include <time.h>
#include "sortmethod.h"
#include "sortfactory.h"
    
std::default_random_engine eg(time(nullptr));
std::uniform_int_distribution<int> dis(1, 100);

void generateRandomData(int d[], int len) {

    for (size_t i = 0; i < len; i++) {
        d[i] = dis(eg);
    }
    
}

void implFactory() {

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

    sortfactory factory;

    for (size_t i = 0; i < sizeof(typeArr) / sizeof(SortType); i++) {
        generateRandomData(data, len);
        auto method = factory.generateSortMethod(typeArr[i]);
        if (method != nullptr) {
            if (typeArr[i] == SortType::SortHeap)
                method->printData(data, len, "heap before");
            method->sortData(data, 0, len - 1);
            method->printData(data, len, factory.sorttypeToString(typeArr[i]));
        }
    }
}