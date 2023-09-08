//remove an element from the bottom of the stack
//ITERATIVE way
#include <iostream>
#include <stack>

void removefrombottom(std::stack<int> &st)
{
    std::stack<int> temp;
    int n = st.size();
    while(st.size() != 1)
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();     //pop out the last element
    while(not temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main()
{
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    removefrombottom(st);
    while(!st.empty())
    {
        int curr = st.top();
        st.pop();
        std::cout<<curr<<"\n";
    }
}