//update at kth positio in a singly linked list

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

void insertatHead(Node* &head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void updateatPosition(Node* &head, int k, int val)
{
    Node *temp = head;
    int current_pos = 0;

    while(current_pos != k)
    {
        temp = temp->next;
        current_pos++;
    }
    //temp will be pointing to the node (k)
    temp->val = val;
}

void display(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        std::cout<<temp->val<<"->";
        temp=temp->next;
    }
    std::cout<<"NULL"<<std::endl;
}

int main()
{
    Node *head = NULL;
    insertatHead(head, 3);
    display(head);
    insertatHead(head, 2);
    display(head);
    insertatHead(head, 1);
    display(head);
    insertatHead(head, 4);
    display(head);
    updateatPosition(head, 2, 6);
    display(head);
    return 0;
}