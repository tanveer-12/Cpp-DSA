//given an array, print all the elements of the array recursively

#include <iostream>

void f(int *arr, int idx, int n);

int main()
{
    int n = 5;
    int arr[] = {1,2,4,5,6};
    f(arr, 0, n);
    return 0;
}

void f(int *arr, int idx, int n)
{
    //base case
    if(idx == n)
    {
        return;
    }

    //self-work
    std::cout<<arr[idx]<<"\n";

    //assume that
    f(arr, idx + 1, n); //assume it works correctly
}