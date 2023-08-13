//WAP to display multiplication of two matrices entered by the user
#include <iostream>
#include <vector>
int main()
{
    //size of first matrix
    int r1,c1;
    std::cout<<"Enter r1 and c1: "<<std::endl;
    std::cin>>r1>>c1;

    int A[r1][c1];
    std::cout<<"Enter elements for first matrix: "<<std::endl;
    //taking elements for first matrix
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            std::cin>>A[i][j];
        }
    }

    //size of second matrix
    int r2,c2;
    std::cout<<"Enter r2 and c2: "<<std::endl;
    std::cin>>r2>>c2;

    int B[r2][c2];
    std::cout<<"Enter elements for second matrix: "<<std::endl;
    //taking elements for second matrix
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            std::cin>>B[i][j];
        }
    }

    //condition for multiplication
    if(c1!=r2)
    {
        std::cout<<"Matrix Multiplication is not possible"<<std::endl;
    }

    //ans matrix size
    int C[r1][c2];

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            int ans = 0;
            for(int k=0; k<r2; k++)  //either k<r2 or k<c1 because c1==r2
            {
                ans += A[i][k]*B[k][j];    //when this loop is finished we update C matrix
            }
            C[i][j] = ans;
        }
    }


    //printing the ans matrix
    std::cout<<"The answer matrix is: "<<std::endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            std::cout<<C[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}