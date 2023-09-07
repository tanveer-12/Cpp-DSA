//Copy contents of one stack to another in same order
#include <iostream>
#include <stack>

std::stack<int> copyStack(std::stack<int> &input)
{
    std::stack<int> temp;
    //keep popping out elements from input stack until it becomes empty
    while(not input.empty())
    {
        int curr = input.top();  //[1,2,3], curr = 3 and when top is popped stack remains [1,2]
        input.pop();
        temp.push(curr);  //[3,2,1]  at the end of the loop
    }
    std::stack<int> result;
    while(not temp.empty()) 
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);   //[1,2,3] after reversing the original stack
    }
    return result;
}

int main()
{
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    std::stack<int> ans = copyStack(st);
    //
    while(not ans.empty())
    {
        int curr = ans.top();
        ans.pop();
        std::cout<<curr<<"\n";
    }
    return 0;
}