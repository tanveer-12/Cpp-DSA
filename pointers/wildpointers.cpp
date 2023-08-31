//coding example to understand wild pointers

#include <iostream>
int main()
{
    int *ptr; //only declared
    std::cout<<ptr<<" "<<*ptr<<std::endl;
    return 0;
}