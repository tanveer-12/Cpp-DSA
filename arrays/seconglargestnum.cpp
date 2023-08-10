//WAP to find the second largest element in the  given array
#include <iostream>

int largestElementIndex(int arr[],int size);

int main()
{
    int arr[] = {2,3,5,7,6,1};

    int indexofLargest = largestElementIndex(arr,6);
    std::cout<<arr[indexofLargest]<<std::endl;

    arr[indexofLargest] = -1;

    int indexofsecondLargest = largestElementIndex(arr,6);
    std::cout<<arr[indexofsecondLargest]<<std::endl;

    return 0;
}

int largestElementIndex(int arr[],int size)
{
    int max = INT_MIN;
    int maxIndex = -1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}