//reverse the stack elements
#include <iostream>
#include <stack>
void reversestack(std::stack<int> &st)
{
    std::stack<int> temp1, temp2;
    while(!st.empty())
    {
        int curr = st.top();
        st.pop();
        temp1.push(curr); //store in a temporary stack
    }
    //storing the elements from temp1 to temp2 so that they get in original form
    while(!temp1.empty())
    {
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
    //storing the elements from temp2 to original stack st
    //so that they get stored in reverse way
    while(!temp2.empty())
    {
        int curr = temp2.top();
        temp2.pop();
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
    //making a copy of stack
    std::stack<int> stcopy = st;
    //printing original stack
    std::cout<<"Original stack\n";
    while(!stcopy.empty())
    {
        int curr = stcopy.top();
        stcopy.pop();
        std::cout<<curr<<"\n";
    }
    reversestack(st);
    stcopy = st;
    std::cout<<"After reversing the stack: \n";
    while(!stcopy.empty())
    {
        int curr = stcopy.top();
        stcopy.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}