
#include "simple_factory.h"
#include <iostream>
#include <memory>
#include "sort_method.h"
#include "sort_method_bubble.h"
#include "sort_method_quick.h"
#include "sort_method_merge.h"
#include "sort_method_select.h"
#include "sort_method_insert.h"
#include "sort_method_shell.h"
#include "sort_method_heap.h"

std::shared_ptr<SortMethod> SimpleFactory::GenerateSortMethod(SortType stype) {
    std::shared_ptr<SortMethod> sortObj = nullptr;
    switch (stype)
    {
    case SortType::SortBubble :
        sortObj = std::shared_ptr<SortMethod>(new SortBubble());
        break;
    case SortType::SortSelect :
        sortObj = std::shared_ptr<SortMethod>(new  SortSelect());
        break;
    case SortType::SortInsert :
        sortObj = std::shared_ptr<SortMethod>(new SortInsert());
        break;
    case SortType::SortShell:
        sortObj = std::shared_ptr<SortMethod>(new SortShell());
        break;
    case SortType::SortQuick:
        sortObj = std::shared_ptr<SortMethod>(new SortQuick());
        break;
    case SortType::SortMerge:
        sortObj = std::shared_ptr<SortMethod>(new SortMerge());
        break;
    case SortType::SortHeap:
        sortObj = std::shared_ptr<SortMethod>(new SortHeap());
        break;
    default:
        std::cout << "unkown sort type " << sorttypeToString(stype) << std::endl;
        break;
    }
    return sortObj;
}

std::string SimpleFactory::sorttypeToString(SortType sType) {
    std::string typeString;
    switch (sType)
    {
    case SortType::SortBubble :
        typeString = "SortBubble";
        break;
    case SortType::SortSelect :
        typeString = "SortSelect";
        break;
    case SortType::SortInsert :
        typeString = "SortInsert";
        break;
    case SortType::SortShell:
        typeString = "SortShell";
        break;
    case SortType::SortQuick:
        typeString = "SortQuick";
        break;
    case SortType::SortMerge:
        typeString = "SortMerge";
        break;
    case SortType::SortHeap:
        typeString = "SortHeap";
        break;
    default:
        typeString = "not in SortType";
        break;
    }

    return typeString;
}