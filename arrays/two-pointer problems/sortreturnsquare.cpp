//Given an integer array 'a' sorted in non-decreasing order, return an array of sqaures of each 
// number in non-decreaing order
#include <iostream>
#include <vector>
#include <algorithm>
void sortedSquaredArray(std::vector<int> &v);

int main()
{
    int n;
    std::cout<<"Enter array size: ";
    std::cin>>n;

    std::vector<int> v;

    std::cout<<"Enter array elements in non-decreasing order: ";
    for(int i=0; i<n; i++)
    {
        int elements;
        std::cin>>elements;
        v.push_back(elements);
    }
    sortedSquaredArray(v);
    return 0;
}

void sortedSquaredArray(std::vector<int> &v)
{
    std::vector<int> ans;
    int leftptr = 0;
    int rightptr = v.size() - 1;
    while (leftptr <= rightptr)
    {
        if(abs(v[leftptr])<abs(v[rightptr]))
        {
            ans.push_back(v[rightptr]*v[rightptr]);
            rightptr--;
        }
        else
        {
            ans.push_back(v[leftptr]*v[leftptr]);
            leftptr++;
        }
    }
    std::reverse(ans.begin(),ans.end());
    for(int i=0; i <ans.size();i++)
    {
        std::cout<<ans[i]<<" ";
    }
    std::cout<<std::endl;
}