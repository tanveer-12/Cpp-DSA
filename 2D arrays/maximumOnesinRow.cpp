//Given a boolean of 2D array, where each row is sorted. Find the
// row with the maximum number of 1s
//input : row=3, col=4
//matrix[] = {{0 1 1 1},
//            {0 0 0 1},
//             {0 0 0 1}};
//output : 0 (row = 0th)

#include <iostream>
#include <vector>

int maximumOnesRow(std::vector<std::vector<int>> &v);

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
    int result = maximumOnesRow(vec);
    std::cout<<"row -> "<<result<<std::endl;
    return 0;
}

int maximumOnesRow(std::vector<std::vector<int>> &v)
{
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;  //maximum 1s vali row ka index
    int columns = v[0].size();  //every row has same number of columns so i am going with 0th row
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            if(v[i][j]==1)
            {
                int numberofOnes = columns - j;
                if(numberofOnes > maxOnes)
                {
                    maxOnes = numberofOnes;
                    maxOnesRow = i;   //index of that row
                }
                break;
            }
        }
    }
    return maxOnesRow;
}