#ifndef INCLUDE_SORT_METHOD_BUBBLE_H_
#define INCLUDE_SORT_METHOD_BUBBLE_H_

class SortBubble : public SortMethod
{
private:
    /* data */
public:
    SortBubble(/* args */) {}
    virtual ~SortBubble() { }

    virtual void sortData(int d[], int start, int end) override; 
};

#endif  //  INCLUDE_SORT_METHOD_BUBBLE_H_