/*
print this pattern:
A
B B
C C C
D D D D
E E E E E
*/

#include <iostream>

int main()
{
    char input, alphabet = 'A';
    std::cout<<"Enter the uppercase alphabet you want to print into the last row: "<<std::endl;
    std::cin>>input;
    for(int i=1; i<= (input - 'A' + 1); ++i)
    {
        for(int j =1; j <= i; ++j)
        {
            std::cout<<alphabet<<" ";
        }
        ++alphabet;
        std::cout<<std::endl;
    }
    return 0;
}