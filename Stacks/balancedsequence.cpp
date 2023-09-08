//check whether a given bracket sequence is balanced or not ?
#include <iostream>
#include <stack>

bool isValid(std::string str)
{
    std::stack<char> st;
    for(int i =0; i<str.size(); i++)
    {
        char ch = str[i];   //current character
        if(ch == '[' or ch == '{' or ch == '(')
        {
            st.push(ch);
        }
        else
        {
            //closing brackets
            if(ch == ')' and !st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else if(ch == ']' and !st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else if(ch == '}' and !st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();     //return true if stack becomes empty at the end
}

int main()
{
    std::string str = "()()(())";
    std::cout<<isValid(str)<<"\n";
    return 0;
}