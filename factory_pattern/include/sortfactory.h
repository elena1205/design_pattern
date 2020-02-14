#ifndef _SORT_FACTORY_H_
#define _SORT_FACTORY_H_

enum class SortType {
    SortBubble,
    SortSelect,
    SortInsert,
    SortShell,
    SortQuick,
    SortMerge,
    SortHeap
};

class sortfactory
{
private:
    /* data */
public:
    sortfactory(/* args */) {}
    virtual ~sortfactory() {}

    std::shared_ptr<sortmethod> generateSortMethod(SortType type);
    std::string sorttypeToString(SortType sType);

};

#endif