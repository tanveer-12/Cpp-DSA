//given a positive integer n, generate an n x n matrix filled with elements from 1 to n^2 in spiral order
//let n = 3
// 3x 3 matrix 
//with value 1 to 3^2=9 ( 1-9) in spiral order
/* output =
1 2 3
8 9 4
7 6 5
*/
#include <iostream>
#include <vector>

std::vector<std::vector<int>> createSpiral(int n);

int main()
{
    int n;
    std::cout<<"Enter matrix size: ";
    std::cin>>n;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    matrix = createSpiral(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
std::vector<std::vector<int>> createSpiral(int n)
{
    std::vector<std::vector<int>> matrix(n,std::vector<int>(n));
    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;
    int direction = 0;
    int value = 1;   //as elements going to start from 1
    while(left<=right && top<=bottom)
    {
        //left -> right
        if(direction == 0)
        {
            for(int i=left; i<= right; i++)
            {
                matrix[top][i] = value++;
            }
            top++;
        }
        //top -> bottom
        else if(direction == 1)
        {
            for(int j=top; j<=bottom; j++)
            {
                matrix[j][right] = value++;
            }
            right--;
        }
        //right -> left
        else if (direction==2)
        {
            for(int i=right; i>=left; i--)
            {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }
        //bottom -> top
        else
        {
            for(int j=bottom; j>=top; j--)
            {
                matrix[j][left] = value++;
            }
            left++; 
        }
        direction = (direction + 1) % 4;
    }
    return matrix;
}