#include <iostream>
#include <memory>
#include "sort_method.h"
#include "factory.h"
#include "bubble_factory.h"


void implMethodFactory() {
    const int len = 15;
    int data[len] = {};

    auto factory = std::shared_ptr<BubbleFactory>(new BubbleFactory());
    auto method = factory->GenerateSortMethod();
    if (method) {
        method->generateRandomData(data, len);
        method->sortData(data, 0, len - 1);
        method->printData(data, len, "method factory bubble");
    }
}