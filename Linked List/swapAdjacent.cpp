// Given a Linked list, swap every two adjacent nodes and return its head.
//you may not modify the values in the list's nodes.
// only nodes themselves may be changed

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

Node* swapadjacent(Node* &head)
{
    //base case
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    //recursive case
    Node *secondnode = head->next;
    head->next = swapadjacent(secondnode->next);
    secondnode->next = head;      //reversing the link between first and second node
    return secondnode;     //new head of the LL is given by secondnode
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
    l1.display();
    l1.head = swapadjacent(l1.head);
    l1.display();
    return 0;
}