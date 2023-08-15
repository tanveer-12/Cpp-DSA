//given an n x m matrix 'a', return all elements of the matrix in spiral order
//in short : print the elements of matrix in spiral manner
// 1  2  3
// 4  5  6         ----> 1  2  3  6  9  8  7  4  5  6
// 7  8  9 
#include <iostream>
#include <vector>

void spiralOrder(std::vector<std::vector<int>> &matrix);

int main()
{
    int n,m;
    std::cout<<"Enter matrix size: "<<std::endl;
    std::cin>>n>>m;

    std::vector<std::vector<int>> matrix(n,std::vector<int>(m));
    std::cout<<"Enter matrix elements: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            std::cin>>matrix[i][j];
        }
    }
    spiralOrder(matrix);
    std::cout<<std::endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}

void spiralOrder(std::vector<std::vector<int>> &matrix)
{
    int left = 0;     //first column
    int right = matrix[0].size() - 1;    //last column
    int top = 0;
    int bottom = matrix.size() - 1; //last row
    int direction = 0;

    while(left<=right && top<=bottom)
    {
        //left -> right
        if(direction == 0)
        {
            for(int col=left; col<= right; col++)
            {
                std::cout<<matrix[top][col]<<" "; 
            }
            top++;
        }

        //top -> bottom
        else if(direction == 1)
        {
            for(int row=top; row<=bottom; row++)
            {
                std::cout<<matrix[row][right]<<" ";
            }
            right--;
        }

        //right -> left
        else if(direction == 2)
        {
            for(int col=right; col>=left; col--)
            {
                std::cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }
        
        //bottom -> top
        else 
        {
            for(int row=bottom; row>=top; row--)
            {
                std::cout<<matrix[row][left]<<" ";
            }
            left++;
        }
        direction = (direction + 1)%4;    //so its value remains only 0,1,2,3
    }

}