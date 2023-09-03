// print the max value of array [3,10,3,2,5]

#include <iostream>

int f(int *arr, int idx, int n);

int main()
{
    int n = 5;
    int arr[] = {3,10,3,2,5};
    int ans = f(arr, 0, 5);
    std::cout<<"Maximum value of the array is: "<<ans<<std::endl;
    return 0;
}

int f(int *arr, int idx, int n)
{
    //base case
    if(idx == (n - 1))
    {
        return arr[idx];
    }
    return std::max(arr[idx], f(arr,idx + 1, n));
}