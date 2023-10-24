/*given an array of integer numbers, where arr[i] represents
the number of pages in the book.there are 'm' no. of students and task 
is to allocate all the books to their students.*/
//n=no.of books, m=no. of students

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m , int curr_min)
{
    int studentCount = 1;
    int curr_sum =0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>curr_min)
        return false;

        if(curr_sum + arr[i] > curr_min)
        {
            studentCount++;
            curr_sum += arr[i];
            if(studentCount > m)
            return false;
        }
        else 
        {
            curr_sum += arr[i];
        }
    }
    return true;
}

//**function to find minimum pages**
int findPages(int arr[], int n, int m)
{
    long long sum =0;
    if(n < m)
    return -1;
    int mx = INT_MIN;
    //count total no. of pages
    for(int i =0; i<n;i++)
    {
        sum += arr[i];
        mx = max(mx,arr[i]);
    }

    int start = mx, end = sum;
    int result = INT_MAX;

    //traverse util start <= end
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(isPossible(arr,n,m,mid))
        {
            result = mid;
            end = mid -1;
        }
        else{
            start = mid +1;
        }
       
    }
     return result;
}

int main()
{
    int arr[] = {10,20,30,40}; //number of pages in book
    int n = sizeof arr / sizeof arr[0];
    int m = 2; //no. of students

    cout<<"Minimum number of pages: "<<findPages(arr, n, m)<<endl;
    return 0;
}



