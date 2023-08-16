// 3 . pre-calculating the sum for each row and each column in the matrix

//Given a matrix of 'a' dimension n x m and 2 coordinates  (l1,r1) and (l2,r2).
//return the sum of rectangle formed from (l1,r1) to (l2,r2)

#include <iostream>
#include <vector>

int rectangleSum(std::vector<std::vector<int>> &matrix, int l1, int r1, int l2, int r2);

int main()
{
    int n,m;
    std::cout<<"Enter matrix size: ";
    std::cin>>n>>m;
    std::vector<std::vector<int>> matrix(n,std::vector<int>(m));
    std::cout<<"Enter elements for matrix: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            std::cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    std::cout<<"Enter l1 and r1: ";
    std::cin>>l1>>r1;
    std::cout<<"Enter l2 and r2: ";
    std::cin>>l2>>r2;
    int sum = rectangleSum(matrix,l1,r1,l2,r2);
    std::cout<<"sum is: "<<sum<<std::endl;
    return 0;
}

int rectangleSum(std::vector<std::vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;

    //calculating prefix sum array row-wise
    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=1; j<matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i][j-1];
        }
    }
    
    //calculating the prefix sum array column-wise
    for(int i=1; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[0].size(); j++)
        {
            matrix[i][j] += matrix[i-1][j];
        }
    }

    //printing prefix sum 2d array
    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[0].size(); j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    int top_sum = 0, left_sum = 0, topleft_sum = 0;
    if(l1 != 0)
    {
        top_sum = matrix[l1 - 1][r2];
    }
    if(r1 != 0)
    {
         left_sum = matrix[l2][r1 - 1];
    }
    if(l1!=0 && r1!=0)
    {
        topleft_sum = matrix[l1 -1][r1-1];
    }
    sum = matrix[l2][r2] - top_sum - left_sum + topleft_sum;

    return sum;
}