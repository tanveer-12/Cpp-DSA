//Sort an array consisting of only 0s and 1s (2-pointer approach)
#include <iostream>
#include <vector>

void sortZeroesandOnes(std::vector<int> &v);

int main()
{
    int n;
    std::cin>>n;

    std::vector <int> v;
    

    for(int i=0; i<n; i++)
    {
        int elements;
        std::cin>>elements;
        v.push_back(elements);
    }
    sortZeroesandOnes(v);
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

void sortZeroesandOnes(std::vector<int> &v)
{
    int leftpointer = 0;
    int rightpointer = v.size() - 1;
    while(leftpointer < rightpointer)
    {
        if(v[leftpointer]==1 && v[rightpointer]==0)
        {
            v[leftpointer++] = 0;     //v[leftpointer++] = 0  instead of incrementing in the next line
            v[rightpointer--] = 1;    //v[rightpointer--] = 1 instead of decrementing in the next line

        }
        if(v[leftpointer] == 0)
        {
            leftpointer++;
        }
        if(v[rightpointer]==1)
        {
            rightpointer--;
        }
    }
    return;
}