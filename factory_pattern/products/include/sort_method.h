#ifndef _SORT_METHOD_H_
#define _SORT_METHOD_H_

class SortMethod
{
private:
    /* data */
public:
    SortMethod(/* args */) {}
    virtual ~SortMethod() {}

    virtual void sortData(int d[], int start, int end) = 0;

    void printData(int d[], int len, std::string tips);

    void generateRandomData(int d[], int len) ;

};

#endif