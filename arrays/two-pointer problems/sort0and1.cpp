//Sort an array consisting of only 0s and 1s
#include <iostream>
#include <vector>

void sortZeroesandOnes(std::vector<int> &v);

int main()
{
    int n;
    std::cout<<"Enter array size: ";
    std::cin>>n;

    std::vector <int> v;
    std::cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        int elements;
        std::cin>>elements;
        v.push_back(elements);
    }
    for(int i =0; i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    sortZeroesandOnes(v);
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

void sortZeroesandOnes(std::vector<int> &v)
{
    int countzero =0;
    for(int element : v)
    {
        if(element==0)
        {
            countzero++;
        }
    }

    for(int i=0; i<v.size(); i++)
    {
        if(i<countzero)
        {
            v[i]=0;
        }
        else
        {
            v[i]=1;
        }
    }
}