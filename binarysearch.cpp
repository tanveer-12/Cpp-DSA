#include<iostream>
using namespace std;

int binarysearch(int arr[], int n,int key);

int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    //calling funnction to search 12 in even array
    int evenindex = binarysearch(even,6,20);
    cout <<"Index of 20 is "<< evenindex<<endl;

    int oddindex= binarysearch(odd,5,11);
    cout<<"Index of 11 is "<<oddindex<<endl;

}

int binarysearch(int arr[], int n, int key)
{
    int start = 0;  //starting index
    int end = n - 1; //ending index

    int mid = start + (end - start)/2;    //mid index

    while(start <= end){

            if(arr[mid]==key)
            {
                return mid;
            }

            if(key > arr[mid])   //going to rigth side of mid
            {
                 start = mid + 1; //setting start address to mid+1
            }                     //start goes to right of mid
            else 
            {
                end =  mid - 1;  //going to left if key < arr[mid]
                                 //end goes to left of mid
            }

            mid = start + (end - start)/2;
    }
    return -1;
}