//WAP to print Floyd's Triangle
/*
* 1
* 2  3
* 4  5  6
* 7  8  9  10
*/

#include <iostream>

int main()
{
    int rows, number = 1;
    std::cout<<"Enter number of rows: ";
    std::cin>>rows;

    for(int i=0; i<=rows ;i++)
    {
        for(int space = 1; space <= rows - 1; space++)
        {
            std::cout<<" ";
        }
        for(int j = 0; j < i; j++)
        {
            std::cout<<number<<" ";
            number++;
            
        }
        std::cout<<std::endl;
    }
    return 0;
}