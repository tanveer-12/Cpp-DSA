// implementation of a node in a doubly linked list
// Introduction to doubly linked list
#include <iostream>
class Node
{
    public:
    int val;

    Node *prev;
    Node *next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLL
{
    public:
    Node *head;
    Node *tail;

    DoublyLL()
    {
        head = NULL;
        tail = NULL;
    }
};

int main()
{
    Node *new_node = new Node(3);   //creates a node with value 3

    DoublyLL dl;
    dl.head = new_node;
    dl.tail = new_node;
    std::cout<<dl.head->val<<" "<<dl.tail->val<<std::endl;
    return 0;
}