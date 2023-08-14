//Given a boolean 2D array, where each row is sorted. find the row with the maximum num of 1s
// HERE we detect where the 1 occurs at the leftmost position so 
// jis row mein sbse pehle 1 aa jayega, iska mtlb ussi row mwin hi max num of 1s hai
#include <iostream>
#include <vector>

int leftmostOneRow(std::vector<std::vector<int>> &v);

int main()
{
    int n,m;
    std::cout<<"Enter n and m of matrix: ";
    std::cin>>n>>m;

    std::vector<std::vector<int>> vec(n,std::vector<int>(m));
    std::cout<<"Enter matrix elements: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            std::cin>>vec[i][j];
        }
    }
    int result = leftmostOneRow(vec);
    std::cout<<"row -> "<<result<<std::endl;
    return 0;
}

int leftmostOneRow(std::vector<std::vector<int>> &v)
{
    int leftmostone = -1;
    int maxOnesRow = -1;
    
    //finding the leftmost one in the 0th row

    /* 
    for(int j=v[0].size()-1; j>=0; j--)
    {
        if(v[0][j] == 1)
        {
            leftmostone = j;
        }
        else
        {
            break;
        }
    }
    */
    int j = v[0].size() - 1;
    while(j>=0 && v[0][j] == 1)
    {
        leftmostone = j;
        maxOnesRow = 0;
        j--;
    }
   //check in rest of the rows if we can find a 1 left to the leftmost
    for(int i=1; i<v.size(); i++)
    {
        while(j>=0 && v[i][j] == 1)
        {
            leftmostone = j;
            maxOnesRow = i;
            j--;
        }
    }
    return maxOnesRow;
}