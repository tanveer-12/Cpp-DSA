//remove an element from the bottom of the stack
//RECURSION
//removefrombottom.cpp is its iterative solution
#include <iostream>
#include <stack>
void f(std::stack<int> &st)
{
    //base case
    if(st.size() == 1)
    {
        st.pop();
        return;
    }
    //recursive way
    int curr = st.top();
    st.pop();
    f(st);
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
    //printing the original stack
    //making a copy of stack
    std::cout<<"original stack\n";
    std::stack<int> stcopy = st;
    while(!stcopy.empty())
    {
        int curr = stcopy.top();
        stcopy.pop();
        std::cout<<curr<<"\n";
    }
    f(st);
    stcopy = st;
    //printing the stack after removing the element
    std::cout<<"Printing stack after removing element from bottom"<<std::endl;
    while(!stcopy.empty())
    {
        int curr = stcopy.top();
        stcopy.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}