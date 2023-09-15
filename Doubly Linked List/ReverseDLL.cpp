// Given the head of a DLL, reverse it
#include <iostream>
class Node
{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int data)
    {
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
    public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertatStart(int val)
    {
        Node *new_node = new Node(val);
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            std::cout<<temp->val<<" ";
            temp = temp->next;
        }
        std::cout<<std::endl;
    }
};

void reverseDLL(Node* &head, Node* &tail)
{
    Node *curr = head;
    while(curr != NULL)
    {
        Node *nextptr = curr->next;
        curr->next = curr->prev;
        curr->prev = curr->next;
        curr = nextptr;
    }

    //swapping head and tail after reversing the list
    Node *new_head = tail;
    tail  = head;
    head = new_head;
}

int main()
{
    DoublyLinkedList dll;
    dll.insertatStart(9);
    dll.insertatStart(8);
    dll.insertatStart(7);
    dll.insertatStart(6);
    dll.insertatStart(5);
    dll.insertatStart(4);
    dll.display();
    reverseDLL(dll.head, dll.tail);
    dll.display();
    return 0;
}