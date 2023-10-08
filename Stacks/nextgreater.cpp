//Return an array of first greater element found next to the elements in the given array

#include <iostream>
#include <vector>
#include <stack>

std::vector<int> nextgreater(std::vector<int> &arr)
{
    int n = arr.size();
    std::vector<int> output(n, -1);
    std::stack<int> st;
    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && arr[i] > arr[st.top()])
        {
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    //not mandatory while loop.
    //since we already initialized our stack with -1, so if it does not find any 
    // next greater element for an index, it will return -1 for that index
    while(not st.empty())
    {
        output[st.top()] = -1;
        st.pop();
    }
    return output;
}

int main()
{
    int n;  //size of stack;
    std::cout<<"Enter array size: ";
    std::cin >> n;
    std::vector<int> v;

    //taking elements into vector
    std::cout<<"Enter array elements: ";
    for(int i=0; i < n; i++)
    {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    std::vector<int> result = nextgreater(v);

    //printing the ouput array
    std::cout<<"Output array is: ";
    for(int i = 0; i < result.size(); i++)
    {
        std::cout<<result[i]<<" ";
    }
    return 0;
}