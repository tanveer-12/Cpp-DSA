//reverse the stack
//RECURSION
//reversestack.cpp is its iterative way
#include <iostream>
#include <stack>

void insertatbottom(std::stack<int> &st, int x)
{
    std::stack<int> temp;
    while(!st.empty()) 
    {
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void f(std::stack<int> &st)
{
    //base case
    if(st.empty())
    {
        return;
    }
    int curr = st.top();
    st.pop();              //do it until stack is empty
    f(st);              //now that stack is empty, start inserting elements from bottom
    insertatbottom(st ,curr);     //insert at top of new stack and then call again for rest of the elements in original stack
}

int main()
{
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    std::stack<int> stcopy = st;
    std::cout<<"Original stack\n";
    while(!stcopy.empty())
    {
        int curr = stcopy.top();
        stcopy.pop();
        std::cout<<curr<<"\n";
    }
    f(st);
    stcopy = st;
    std::cout<<"After reversing the array\n";
    while(!stcopy.empty())
    {
        int curr = stcopy.top();
        stcopy.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}