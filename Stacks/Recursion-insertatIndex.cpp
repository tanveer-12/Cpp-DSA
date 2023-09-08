//inserting element into stack at any index
//RECURSION
//insertatIndex.cpp is its iterative solution
#include <iostream>
#include <stack>

void f(std::stack<int> &st, int x, int idx)
{
    //base case
    if(idx <= 0)
    {
        st.push(x);
        return;
    }
        int curr = st.top();
        st.pop();
        f(st, x, idx - 1);
        st.push(curr);
}

int main()
{
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //printing Original stack
    std::cout<<"Original Stack\n";

    //make a copy of stack before printing
    std::stack<int> stcopy = st;
    while(! stcopy.empty())
    {
        std::cout<<stcopy.top()<<"\n";
        stcopy.pop();
    }
    f(st, 100, 2);
    std::cout<<"Stack after inserting element: \n";

    // Make a copy of the stack after inserting the element for printing
    stcopy = st;

    while(!stcopy.empty())
    {
        int curr = stcopy.top();
        stcopy.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}