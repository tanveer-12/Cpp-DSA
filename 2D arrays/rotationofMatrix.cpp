//given a sqaure matrix, turn it by 90 degress in clockwise direction without using any extra space
/*
input :           output : 
1  2  3            7  4  1
4  5  6    -->     8  5  2
7  8  9            9  6  3
*/
#include <iostream>
#include <vector>
#include <algorithm>

void rotateArray(std::vector<std::vector<int>> &vec);

int main()
{
    int n;
    std::cout<<"Enter size of square Matrix: "<<std::endl;
    std::cin>>n>>n;

    std::vector<std::vector<int>> vec(n, std::vector<int>(n));
    std::cout<<"Enter matrix elements: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            std::cin>>vec[i][j];
        }
    }
    rotateArray(vec);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n ;j++)
        {
            std::cout<<vec[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

void rotateArray(std::vector<std::vector<int>> &vec)
{
    int n = vec.size();
    //transpose of matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)    //here j<i because hmne lower triangle lia hai matrix mein as in diagonal i=j
        {                           // so lower mein j<i
            std::swap(vec[i][j], vec[j][i]);
        }
    }

    //reversing every row
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            std::reverse(vec[i].begin(), vec[i].end());
        }
    }
    return;
}