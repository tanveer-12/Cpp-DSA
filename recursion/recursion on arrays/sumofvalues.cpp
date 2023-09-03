//find the sum of values of array [2,3,5,20,1]

#include <iostream>

int f(int *arr, int idx, int n);

int main()
{
    int n = 5;
    int arr[] = {2,3,5,20,1};
    int ans = f(arr, 0, 5);
    std::cout<<"Sum of values of the array is: "<<ans<<std::endl;
    return 0;
}

int f(int *arr, int idx, int n)
{
    //base case
    if(idx == (n - 1))
    {
        return arr[idx];
    }
    return arr[idx] + f(arr, idx + 1, n);
}