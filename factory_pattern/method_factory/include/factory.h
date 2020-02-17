#ifndef INCLUDE_FACTORY_H_
#define INCLUDE_FACTORY_H_

class SortFactory
{
private:
    /* data */
public:
    SortFactory(/* args */) {}
    virtual ~SortFactory() {}

    virtual std::shared_ptr<SortMethod> GenerateSortMethod() = 0; 

};




#endif  //  INCLUDE_FACTORY_H_