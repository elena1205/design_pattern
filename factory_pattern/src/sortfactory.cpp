
#include <iostream>
#include <memory>
#include "sortmethod.h"
#include "sortfactory.h"

std::shared_ptr<sortmethod> sortfactory::generateSortMethod(SortType stype) {
    std::shared_ptr<sortmethod> sortObj = nullptr;
    switch (stype)
    {
    case SortType::SortBubble :
        sortObj = std::shared_ptr<sortmethod>(new sortBubble());
        break;
    case SortType::SortSelect :
        sortObj = std::shared_ptr<sortmethod>(new  sortSelect());
        break;
    case SortType::SortInsert :
        sortObj = std::shared_ptr<sortmethod>(new sortInsert());
        break;
    case SortType::SortShell:
        sortObj = std::shared_ptr<sortmethod>(new sortShell());
        break;
    case SortType::SortQuick:
        sortObj = std::shared_ptr<sortmethod>(new sortQuick());
        break;
    case SortType::SortMerge:
        sortObj = std::shared_ptr<sortmethod>(new sortMerge());
        break;
    case SortType::SortHeap:
        sortObj = std::shared_ptr<sortmethod>(new sortHeap());
        break;
    default:
        std::cout << "unkown sort type " << sorttypeToString(stype) << std::endl;
        break;
    }
    return sortObj;
}

std::string sortfactory::sorttypeToString(SortType sType) {
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