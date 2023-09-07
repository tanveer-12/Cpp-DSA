// Array implementation of Stack
#include <iostream>
class Stack
{
    int capacity;
    int *arr;
    int top;

    public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int(c);     //make array of capacity c
        this->top = -1;       //initialize top by -1
    }

    void push(int data)
    {
        if(this->top == this->capacity - 1)       //check if stack is full. if top is at the end of stck then it is full
        {
            std::cout<<"Overflow\n";
            return;
        }
        //if it is not full
        this->top++;
        this->arr[this->top] = data;     //put value onto top index of array
    }

    int pop()
    {
        if(this->top == -1)
        {
            std::cout<<"Underflow\n";
            return INT_MIN;
        }
        this->top--;     //remove access to the top element that means we remove the element from stack
    }

    int getTop()
    {
        if(this->top == -1)
        {
            std::cout<<"Underflow\n";
            return INT_MIN;
        }
        return (this->arr[this->top]);   ///we are returning the last element in our array which is at position 0.
    }

    bool isEmpty()
    {
        return this->top = -1;    //if stack emepty return true
    }

    int size()
    {
        return this->top + 1;  //if there is element in stack, return its size by (top + 1)
    }

    bool isFull()
    {
        return this->top = this->capacity - 1;    //return true if
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout<<st.getTop()<<"\n";
    st.push(4);
    st.push(5);
    std::cout<<st.getTop()<<"\n";
    st.push(8);
    return 0;
}