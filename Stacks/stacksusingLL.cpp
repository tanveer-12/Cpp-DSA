// Linked List implementation of Stacks
#include <iostream>
class Node
{
    public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class Stack
{
    Node *head;
    int capacity;
    int currentsize;
    public:
    Stack(int c)
    {
        this->capacity = c;
        this->currentsize = 0;
        this->head = NULL;
    }

    bool isEmpty()
    {
        return this->head == NULL;
    }

    bool isFull()
    {
        return this->currentsize == this->capacity;
    }

    void push(int data)
    {
        if(this->currentsize == this->capacity)
        {
            std::cout<<"Overflow\n";
            return;
        }
        Node *new_node = new Node(data);
        new_node->next = head;
        this->head = new_node;
        currentsize++;
    }

    int pop()
    {
        if(this->head == NULL)
        {
            std::cout<<"Underflow\n";
            return INT_MIN;
        }
        //if it is not null
        //then make a pointer to store the new head
        Node *new_head =  this->head->next;
        this->head->next = NULL;
        Node *tobeRemoved = this->head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        this->head = new_head;
        return result;
    }

    int size()
    {
        return this->currentsize;
    }

    int getTop()
    {
        if(this->head == NULL)
        {
            std::cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->head->data;
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
    st.pop();
    st.pop();
    std::cout<<st.getTop()<<"\n";
    return 0;
}