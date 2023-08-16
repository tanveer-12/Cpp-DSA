//  (BRUTE FORCE to solve the PREFIX SUM problem in 2D arrays)
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
    std::cout<<"Enter coordinates: ";
    int l1,r1,l2,r2;
    std::cout<<"Enter l1 and r1: ";
    std::cin>>l1>>r1;
    std::cout<<"Enter l2 and r2: ";
    std::cin>>l2>>r2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    int sum = rectangleSum(matrix,l1,r1,l2,r2);
    std::cout<<"sum is: "<<sum;
}

int rectangleSum(std::vector<std::vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for(int i=l1; i<=l2; i++)
    {
        for(int j= r1; j<=r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}