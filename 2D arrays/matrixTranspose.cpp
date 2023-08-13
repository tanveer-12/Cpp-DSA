//WAP to display transpose of the matrix entered by the user
#include <iostream>
int main()
{
    //size of matrix
    int r,c;
    std::cout<<"Enter r and c of matrix: "<<std::endl;
    std::cin>>r>>c;

    int A[r][c];
    //taking elements input from user
    std::cout<<"Enter elements for matrix: "<<std::endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            std::cin>>A[i][j];
        }
    }

    //ans matrix
    int transpose[c][r];  
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            transpose[i][j] = A[j][i];
        }
    }

    //printing the transpose matrix
    std::cout<<"The ans matrix is: "<<std::endl;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            std::cout<<transpose[i][j]<<" ";
        }
        std::cout<<std::endl;
    }


    return 0;
}