//Given the head of a linked list, reverse the nodes of the list K at a time, and 
// return the modified list
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

    void insertatEnd(int val)
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

Node* reverseKnodes(Node* &head, int k)
{
    Node *prevptr = NULL;
    Node *currentptr = head;

    int counter = 0;         //counting first k nodes
    while(currentptr != NULL && counter < k)
    {
        Node *nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
        counter++;
    }
    //when this ends, currentptr will give us (k+1)th node
    if(currentptr != NULL)
    {
        Node *new_head = reverseKnodes(currentptr, k);
        head->next = new_head;
    }
    return prevptr;      //to return new head of the list
}

int main()
{
    LinkedList li;
    li.insertatEnd(1);
    li.insertatEnd(2);
    li.insertatEnd(3);
    li.insertatEnd(4);
    li.insertatEnd(5);
    li.insertatEnd(6);
    li.display();
    li.head = reverseKnodes(li.head, 2);
    li.display();
    return 0;
}