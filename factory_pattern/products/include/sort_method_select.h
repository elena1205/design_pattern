#ifndef INCLUDE_SORT_METHOD_SELECT_H_
#define INCLUDE_SORT_METHOD_SELECT_H_


class SortSelect : public SortMethod
{
private:
    /* data */
public:
    SortSelect(/* args */) {}
    virtual ~SortSelect() {  }

    virtual void sortData(int d[], int start, int end) override;
};

#endif  //  INCLUDE_SORT_METHOD_SELECT_H_