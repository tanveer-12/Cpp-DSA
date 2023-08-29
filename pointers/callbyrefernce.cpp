//swap numbers using call by reference using pointers
#include <iostream>

void swap(int *x, int *y);

int main()
{
    int a = 10;
    int b = 20;

    std::cout<<"Before swapping, a: "<<a<<std::endl;
    std::cout<<"Before swapping, b: "<<b<<std::endl;

    swap(&a, &b);

    std::cout<<"After swapping, a: "<<a<<std::endl;
    std::cout<<"After swapping, b: "<<b<<std::endl;

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x   = *y;
    *y	  = temp;
}