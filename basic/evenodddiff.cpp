//WAP to find the difference between the sum of elements at even indices
// to the sum of the elements at odd indices
#include <iostream>
#include <vector>
int main()
{
    int array[] = {1,2,1,2,1,2};

    int ans = 0;
    for(int i=0;i<6;i++)
    {
        if(i%2==0)
        {
            ans = ans + array[i]; //ans+=array[i]
        }
        else
        {
            ans = ans - array[i];  //ans-=array[i]
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}