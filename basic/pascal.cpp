//WAP to print pascal's triangle
/*
* 1
* 1  1
* 1  2  1
* 1  3  3  1
*/

#include <iostream>

int main()
{
    int rows, coef = 1;
    std::cout<<"Enter the number of rows: ";
    std::cin>>rows;

    for(int i =0; i < rows; i++)
    {
        for(int space = 1; space <= rows -1; space++)
        {
            std::cout<<" ";
        }
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef *(i-j+1)/j;
            }
            std::cout<<coef<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}