#include <iostream>
#include <memory>
#include "sort_method.h"
#include "sort_method_bubble.h"
#include "factory.h"
#include "bubble_factory.h"

std::shared_ptr<SortMethod> BubbleFactory::GenerateSortMethod() {
    return std::shared_ptr<SortMethod>(new SortBubble());
}
