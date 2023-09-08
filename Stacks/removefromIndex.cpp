//remove an element from stack at any given index
#include <iostream>
#include <stack>

void removefromindex(std::stack<int> &st, int idx)
{
    std::stack<int> temp;
    int n = st.size();
    int count = 0;
    while(count < (n-idx-1))
    {
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(!temp.empty())
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
    st.push(6);
    removefromindex(st,2);
    while(!st.empty())
    {
        int curr = st.top();
        st.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}