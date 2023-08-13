//Given an integer n, return the first n row of Pascal's Triangle

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> pascaltriangle(int n);

int main()
{
    int n;
    std::cout<<"Enter number of rows of Pascal's Triangle: ";
    std::cin>>n;

    std::vector<std::vector<int>> ans;
    ans = pascaltriangle(n);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            std::cout<<ans[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

std::vector<std::vector<int>> pascaltriangle(int n)
{
    std::vector<std::vector<int>> pascal(n);

    for(int i=0; i<n; i++)
    {
        pascal[i].resize(i+1);  //so that vector row elements starts from 1-based indexing

        for(int j=0; j<i+1; j++)
        {
            if(j==0 || j==i)
            {
                pascal[i][j]=1;
            }
            else
            {
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}