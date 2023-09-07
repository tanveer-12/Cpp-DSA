//insert an element x at any index given by user
#include <iostream>
#include <stack>

void insertAt(std::stack<int> &st, int x, int idx)
{
    std::stack<int> temp;
    int n = st.size();
    int count = 0;
    while(count < (n - idx))
    {
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    //putting elements from temp to back again into stack st
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
    insertAt(st, 100, 2);
    while(not st.empty())
    {
        int curr = st.top();
        st.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}