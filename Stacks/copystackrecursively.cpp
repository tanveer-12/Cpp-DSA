//copy contents from one stack to another in same order
// RECURSIVELY

#include <iostream>
#include <stack>

void f(std::stack<int> &st, std::stack<int> &result)
{
    //base case
    if(st.empty())
    {
        return;
    }
    //if it is not empty
    int curr = st.top();
    st.pop();
    f(st, result);
    result.push(curr);
}

int main()
{
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    std::stack<int> result;
    f(st, result);
    while(not result.empty())
    {
        int curr = result.top();
        result.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}