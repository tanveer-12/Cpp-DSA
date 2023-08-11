//Given an array of integers 'a', move all the even integers at the begining of the array
//followed by all the odd integers. The relative order of odd or even integers does not matter.
//return any array that satisfies the above condition
#include <iostream>
#include <vector>
void sortEvenOdd(std::vector<int> &v);

int main()
{
    int n;
    std::cout<<"Enter array size: ";
    std::cin>>n;
    
    std::vector<int> v;
    std::cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        int elements;
        std::cin>>elements;
        v.push_back(elements);
    }
    sortEvenOdd(v);
    for(int i=0; i<n;i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

void sortEvenOdd(std::vector<int> &v)
{
    int leftptr = 0;
    int rightptr = v.size() - 1;
    while(leftptr < rightptr)
    {
        if(v[leftptr]%2==1 && v[rightptr]%2 ==0)
        {
            std::swap(v[leftptr],v[rightptr]);
            leftptr++;
            rightptr--;
        }
        if(v[leftptr]%2==0)
        {
            leftptr++;
        }
        if(v[rightptr]%2==1)
        {
            rightptr--;
        }
    }
}