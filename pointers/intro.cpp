//Introduction to pointers
#include <iostream>

int main()
{
    int x = 9;
    float y = 9.8;

    //creating pointer of int datatype to store address of x
    int *ptr = &x;
    std::cout<<ptr<<"\n";

    //creating pointer of float datatype to store the address of y
    float *ptrf = &y;
    std::cout<<ptrf;
    return 0;
}