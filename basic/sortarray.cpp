//WAP to check if the given array is sorted or not
#include <iostream>
#include<vector>

int main()
{
    int array[] = {1,2,3,4,5,6};
    for(int i=1;i<6;i++)
    {
        if (array[i]>array[i-1])
        {
            std::cout<<"Array is sorted"<<std::endl;
            break;
        }
    }
    return 0;
}

//2nd way
/*
int main()
{
    int array[] = {1,2,3,4,5,6};
    bool sortedflag = true;
    for(int i =1;i<6;i++)
    {
        if(array[i]<=array[i-1])
        {
            sortedflag = false;
        }
    }
    cout<<sortedflag<<endl;
    return 0;
}
*/