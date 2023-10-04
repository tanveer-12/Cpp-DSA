//Given Q queries, check if the given number is present in the array or not
//NOTE: Value of all the elements in the array is less than 10 to the power 5

#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cout<<"Enter array size: ";
    std::cin>>n;

    //inserting values into the array
    std::vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        std::cin>>v[i];
    }
     
    const int N = 1e5 + 10;  //defining the size 10 to the power 5
    std::vector <int> freq(N,0);
    for(int i =0; i<n; i++)
    {
        freq[v[i]]++;
    }

    int q;
    std::cout<<"Enter queries: ";
    std::cin>>q;

    while(q--)
    {
        int queryelement;
        std::cout<<"Enter query element: ";
        std::cin>>queryelement;
        std::cout<<"The number of times the query element exist is: "<<freq[queryelement]<<std::endl;
    }

    return 0;
}