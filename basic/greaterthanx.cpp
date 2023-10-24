//WAP to count the number of elements strictly greater than value x
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v(6);
    std::cout<<"Enter elements into vector: ";
    for(int i=0;i<v.size();i++)
    {
        std::cin>>v[i];
    }

    std::cout<<"Enter x: ";
    int x;
    std::cin>>x;

    int count =0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
    std::cout<<"The number of elements greater than "<<x<<" are "<<count<<std::endl;
    return 0;
}