//Given an integer array 'a', return the prefix sum/running sum
// in the same array without creating a new array
#include <iostream>
#include <vector>

void runningsum(std::vector<int> &v);

int main()
{
    int n;
    std::cout<<"Enter arrays size: ";
    std::cin>>n;

    std::vector<int> v;
    std::cout<<"Enter array elements: ";
    for(int i=0; i<n;i++)
    {
        int elements;
        std::cin>>elements;
        v.push_back(elements);
    }
    runningsum(v);
    for(int i=0;i<n;i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

void runningsum(std::vector<int> &v)
{
    for(int i=1; i<v.size();i++)
    {
        v[i] = v[i-1] + v[i];      //v[i] += v[i-1]
    }
    return;
}