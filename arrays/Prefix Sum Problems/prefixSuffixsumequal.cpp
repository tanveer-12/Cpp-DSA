//Check if we can partition the array into two sub arrays with equal sum.
//more formally, check that prefix sum of a part of the array is equal to the suffix
//sum of rest of the array.
#include <iostream>
#include <vector>

bool checkPrefixSuffixsum(std::vector<int> &v);

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
    
    std::cout<<checkPrefixSuffixsum(v)<<std::endl;
    return 0;
}

bool checkPrefixSuffixsum(std::vector<int> &v)
{
    int total_sum =0;
    for(int i=0; i<v.size(); i++)
    {
        total_sum = v[i] + total_sum;    //total_sum += v[i]
    }

    int prefix_sum =0;
    for(int i=0; i<v.size(); i++)
    {
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum == prefix_sum)
        {
            return true;
        }
    }
    return false;
}