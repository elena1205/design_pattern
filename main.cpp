/*
# Copyright (c) 2015 Bingchun Feng. All rights reserved.
*/

#include <iostream>
#include <memory>
#include "simple_factory_api.h"
#include "method_factory_api.h"

int main(int, char**) {
    std::cout << ">>>>> simple factory" << std::endl;
    implSimpleFactory();
    std::cout << ">>>>> method factory" << std::endl;
    implMethodFactory();
}
