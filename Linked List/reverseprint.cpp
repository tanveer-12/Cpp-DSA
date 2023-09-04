// Given the head of a singly linked list, return the reverse printed list

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

void reversePrint(Node* head)
{
    //base case
    if(head == NULL)
    {
        return;
    }
    
    //recursive case
    reversePrint(head->next);
    std::cout<<head->val<<" ";
}

int main()
{
    LinkedList li;
    li.insertatend(1);
    li.insertatend(2);
    li.insertatend(3);
    li.insertatend(4);
    li.display();
    reversePrint(li.head);
    return 0;
}