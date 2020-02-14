#ifndef _SORT_METHOD_H_
#define _SORT_METHOD_H_

class sortmethod
{
private:
    /* data */
public:
    sortmethod(/* args */) {}
    virtual ~sortmethod() {}

    virtual void sortData(int d[], int start, int end) = 0;

    void printData(int d[], int len, std::string tips);
};


class sortBubble : public sortmethod
{
private:
    /* data */
public:
    sortBubble(/* args */) {}
    virtual ~sortBubble() { }

    virtual void sortData(int d[], int start, int end) override; 
};

class sortSelect : public sortmethod
{
private:
    /* data */
public:
    sortSelect(/* args */) {}
    virtual ~sortSelect() {  }

    virtual void sortData(int d[], int start, int end) override;
};

class sortInsert : public sortmethod
{
private:
    /* data */
public:
    sortInsert(/* args */) {}
    virtual ~sortInsert() { }

    virtual void sortData(int d[], int start, int end) override;
};

class sortShell : public sortmethod
{
private:
    /* data */
public:
    sortShell(/* args */) {}
    virtual ~sortShell() { }

    virtual void sortData(int d[], int start, int end) override;
};

class sortQuick : public sortmethod
{
private:
    /* data */
public:
    sortQuick(/* args */) {}
    virtual ~sortQuick() { }
    int getPartition(int d[], int start, int end);
    virtual void sortData(int d[], int start, int end) override;
    void sortDataRecursive(int d[], int start, int end);
    void sortDataIterative(int d[], int start, int end);
}; 

class sortMerge : public sortmethod
{
private:
    /* data */
public:
    sortMerge(/* args */) {}
    virtual ~sortMerge() { }

    virtual void sortData(int d[], int start, int end) override;
    void mergePartition(int d[], int start, int mid, int end);
    void sortDataIterative(int d[], int start, int end);

}; 

class sortHeap : public sortmethod
{
private:
    /* data */
public:
    sortHeap(/* args */) {}
    virtual ~sortHeap() { }

    virtual void sortData(int d[], int start, int end) override;
        
    void buildHeap(int d[], int len);

    void adjustHeap(int d[], int len, int cur);

}; 




#endif