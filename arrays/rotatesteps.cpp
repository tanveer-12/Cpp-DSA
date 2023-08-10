//WAP to rotate the given array 'a' by k steps, where k is non-negative
//NOTE: k can be greater than n as well where n is the size of array 'a'

#include <iostream>
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int k = 3;

    //k can be greater than n
    k = k % size;
    int ansarr[5];
    int j = 0;
    for(int i= size-k; i<size; i++)
    {
        ansarr[j++] = arr[i];
    }
    for(int i=0; i<=k; i++)
    {
        ansarr[j++] = arr[i];
    }

    for(int i=0; i<size; i++)
    {
        std::cout<<ansarr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}