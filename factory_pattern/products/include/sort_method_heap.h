#ifndef INCLUDE_SORT_METHOD_HEAP_H_
#define INCLUDE_SORT_METHOD_HEAP_H_

class SortHeap : public SortMethod
{
private:
    /* data */
public:
    SortHeap(/* args */) {}
    virtual ~SortHeap() { }

    virtual void sortData(int d[], int start, int end) override;
        
    void buildHeap(int d[], int len);

    void adjustHeap(int d[], int len, int cur);

}; 

#endif  //  INCLUDE_SORT_METHOD_HEAP_H_