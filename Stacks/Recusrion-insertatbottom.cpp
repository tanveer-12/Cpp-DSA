//insert element at the bottom of the stack using recursion
// insertatbottom.cpp is its iterative solution

#include <iostream>
#include <stack>

void f(std::stack<int> &st, int x)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }
    int curr = st.top();
    st.pop();
    f(st,x);
    st.push(curr);
}

int main()
{
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    f(st, 100);
    //printing the stack
    while(not st.empty())
    {
        int curr = st.top();
        st.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}