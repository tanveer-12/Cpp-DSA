#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i =0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {2,34,1,55,32,14,66,32,12,4};
    cout<<"Enter the key to search in array: "<<" ";
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found)
    {
        cout<<"Key is present"<<endl;
    }
    else
    cout<<"key is absent"<<endl;
    return 0;
}