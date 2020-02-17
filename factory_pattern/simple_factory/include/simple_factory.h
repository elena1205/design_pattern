#ifndef _SORT_FACTORY_H_
#define _SORT_FACTORY_H_

#include <iostream>
#include <memory>

class SortMethod;

enum class SortType {
    SortBubble,
    SortSelect,
    SortInsert,
    SortShell,
    SortQuick,
    SortMerge,
    SortHeap
};

class SimpleFactory
{
private:
    /* data */
public:
    SimpleFactory(/* args */) {}
    virtual ~SimpleFactory() {}

    std::shared_ptr<SortMethod> GenerateSortMethod(SortType type);
    std::string sorttypeToString(SortType sType);

};

#endif