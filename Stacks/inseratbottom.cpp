//insert an element at the bottom of the stack
#include <iostream>
#include <stack>

void insertatbottom(std::stack<int> &st, int x)
{
    std::stack<int> temp;
    while(not st.empty())
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);  //this is the point where x gets inserted at the bottom

    while(not temp.empty())         //again filling the stack with the values which we emptied at first
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
    insertatbottom(st,100);
    //printing the stack
    while(not st.empty())
    {
        int curr = st.top();
        st.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}