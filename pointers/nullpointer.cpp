//understanding null pointers

#include <iostream>

int main()
{
    int *ptr = NULL;
    std::cout<<ptr<<" "<<*ptr<<std::endl;

    int *ptrs = NULL;
    std::cout<<ptrs;
    return 0;
}