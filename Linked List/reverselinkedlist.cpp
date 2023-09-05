// Given the head of a singly linked list, reverse the list and return the reverse list
#include <iostream>
class Node
{
    public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};


class LinkedList
{
    public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertatend(int val)
    {
        Node *new_node = new Node(val);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            std::cout<<temp->val<<"->";
            temp = temp->next;
        }
        std::cout<<"NULL"<<std::endl;
    }
};

Node* reverselinkedlist(Node* &head)      //becuz we will be returing new_head pointer
{
    Node *prevptr = NULL;
    Node *currentptr = head;

    //currentptr->next = prevptr
    //move all the pointers by 1 step ahead   // do these two things in while loop
    while(currentptr != NULL)
    {
        Node *nextptr = currentptr->next;
        currentptr->next = prevptr;

        // move all pointrs by 1 step ahead
        prevptr = currentptr;
        currentptr = nextptr;
    }
    //when this loop ends, prevptr will be pointing to last node that is my new head
    Node *new_head = prevptr;
    return new_head;
}

int main()
{
    LinkedList li;
    li.insertatend(1);
    li.insertatend(2);
    li.insertatend(3);
    li.insertatend(4);
    li.insertatend(5);
    li.display();
    li.head = reverselinkedlist(li.head);
    li.display();
    return 0;
}