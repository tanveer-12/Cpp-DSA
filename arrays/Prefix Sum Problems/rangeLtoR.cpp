//Given an array of integers if size 'n'. Answer q queries where you need tp print the sum of values in a given 
// range of indices from l to r (both included)
//note: the values of l and r in queries follow 1-based indexing
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cout<<"Enter array size: ";
    std::cin>>n;

    std::vector<int> v(n+1,0);     //vector size from 1 to n+1 and starting element is 0
    std::cout<<"Enter array elements: ";
    for(int i=1; i <= n; i++)
    {
        std::cin>>v[i];
    }

    //calculate preficx sum array
    for(int i=1; i<=n;i++)
    {
        v[i] += v[i-1];
    }

    
    int q;
    std::cout<<"Enter number of queries: ";
    std::cin>>q;
    while(q--)
    {
        int l,r;
        std::cout<<"Enter l and r: "<<std::endl;
        std::cin>>l>>r;
        int ans = 0;
        //ans = prefixsumarray[r] - prefixsumarray[l-1]
        ans = v[r] - v[l-1];
        std::cout<<"The sum of values from index "<<l<<" to "<<r<<" is: "<<ans<<std::endl;
    }
    return 0;
}