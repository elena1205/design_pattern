#ifndef INCLUDE_SORT_METHOD_QUICK_H_
#define INCLUDE_SORT_METHOD_QUICK_H_

class SortQuick : public SortMethod
{
private:
    /* data */
public:
    SortQuick(/* args */) {}
    virtual ~SortQuick() { }
    int getPartition(int d[], int start, int end);
    virtual void sortData(int d[], int start, int end) override;
    void sortDataRecursive(int d[], int start, int end);
    void sortDataIterative(int d[], int start, int end);
}; 

#endif  //  INCLUDE_SORT_METHOD_QUICK_H_