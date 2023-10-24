#include<iostream>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi = max(maxi,num[i]);
    }
    return maxi;
}

int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini = min(mini, num[i]);
    }
    return 0;
}


int main()
{
    int n;
    cin>>n;
    int num[100];
    
    for(int i =0; i<n; i++)
    {
        cin>>num[i];
    }

    cout<<"Maximum value"<<getMax(num,n)<<endl;
    cout<<"Minimum value"<<getMin(num,n)<<endl;
    return 0;
}
