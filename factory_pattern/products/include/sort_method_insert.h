#ifndef INCLUDE_SORT_METHOD_INSERT_H_
#define INCLUDE_SORT_METHOD_INSERT_H_

class SortInsert : public SortMethod
{
private:
    /* data */
public:
    SortInsert(/* args */) {}
    virtual ~SortInsert() { }

    virtual void sortData(int d[], int start, int end) override;
};

#endif  //  INCLUDE_SORT_METHOD_INSERT_H_