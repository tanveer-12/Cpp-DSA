// You are given the head of a singly linked list. this list can be represented as
// L0 -> L1 -> L2 -> ......->Ln-2 -> Ln-1 -> Ln

//reorder the list to be on the following form :
// L0 -> Ln -> L1 -> Ln-1 -> L2 -> Ln-2 ->.....and so on

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

Node* reorderLL(Node* &head)
{
    //1. find the middle element
    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    //now slow is pointing to the middle element

    //2. separate the list and reverse the second half

    Node *curr = slow->next;
    slow->next = NULL;

    Node *prev = slow;
    while(curr != NULL)
    {
        Node *nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
    }

    //3. merging the two halves of LL
    Node *h1 = head;
    Node *h2 = prev;

    while(h1 != h2)
    {
        Node *temp = h1->next;
        h1->next = h2;
        h1 = h2;
        h2 = temp;
    }
    return head;
}

int main()
{
    LinkedList l1;
    l1.insertatEnd(1);
    l1.insertatEnd(2);
    l1.insertatEnd(3);
    l1.insertatEnd(4);
    l1.insertatEnd(5);
    l1.insertatEnd(6);
    l1.insertatEnd(7);
    l1.display();
    l1.head = reorderLL(l1.head);
    l1.display();
    return 0;
}