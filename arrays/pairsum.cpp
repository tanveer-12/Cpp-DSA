//WAP to find the total number of pairs in the array whose sum is equal to the given value x
#include <iostream>
#include <vector>

int main()
{
    int arr[] = {3,4,6,7,1};
    int targetsum = 7;

    int paircount =0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==targetsum)
            {
                paircount++;
            }
        }
    }
    std::cout<<"The number of pairs is: "<<paircount<<std::endl;

    return 0;
}