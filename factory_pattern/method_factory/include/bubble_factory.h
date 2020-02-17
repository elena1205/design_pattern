
#ifndef INCLUDE_BUBBLE_FACTORY_H_
#define INCLUDE_BUBBLE_FACTORY_H_

class BubbleFactory : public SortFactory
{
private:
    /* data */
public:
    BubbleFactory(/* args */) {};
    ~BubbleFactory() {};

    std::shared_ptr<SortMethod> GenerateSortMethod() override;
};


#endif  //  INCLUDE_BUBBLE_FACTORY_H_
