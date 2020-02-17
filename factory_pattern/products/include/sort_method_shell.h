#ifndef INCLUDE_SORT_METHOD_SHELL_H_
#define INCLUDE_SORT_METHOD_SHELL_H_

class SortShell : public SortMethod
{
private:
    /* data */
public:
    SortShell(/* args */) {}
    virtual ~SortShell() { }

    virtual void sortData(int d[], int start, int end) override;
};

#endif  //  INCLUDE_SORT_METHOD_SHELL_H_