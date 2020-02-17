#include <iostream>
#include <stack>
#include <vector>
#include <random>
#include <time.h>
#include "sort_method.h"

std::default_random_engine eg(time(nullptr));
std::uniform_int_distribution<int> dis(1, 100);

void SortMethod::printData(int d[], int len, std::string tips) {
    std::cout << "after " << tips << std::endl;

    for (size_t i = 0; i < len; i++) {
        std::cout<< d[i] << " " ;
    }
    std::cout << std::endl;
}

void SortMethod::generateRandomData(int d[], int len) {
    for (size_t i = 0; i < len; i++) {
        d[i] = dis(eg);
    }
}