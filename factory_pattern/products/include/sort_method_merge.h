#ifndef INCLUDE_SORT_METHOD_MERGE_H_
#define INCLUDE_SORT_METHOD_MERGE_H_

class SortMerge : public SortMethod
{
private:
    /* data */
public:
    SortMerge(/* args */) {}
    virtual ~SortMerge() { }

    virtual void sortData(int d[], int start, int end) override;
    void mergePartition(int d[], int start, int mid, int end);
    void sortDataIterative(int d[], int start, int end);

}; 

#endif  //  INCLUDE_SORT_METHOD_MERGE_H_