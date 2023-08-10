//WAP to find the unique number in a given array where all the elements are
// being repeated twice with one value being unique

#include <iostream>
#include <vector>
int main()
{
    int arr[] = {2,1,3,2,4,1,3};
    int size = 7;

    for(int i=0; i<size; i++)
    {
        for(int j =i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        if(arr[i]>0)
        {
            std::cout<<arr[i]<<std::endl;
        }
    }

    return 0;
}