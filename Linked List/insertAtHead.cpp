//inserting a node at the start

#include <iostream>

class Node
{
    public:
    int val;
    Node * next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertatHead(Node* &head, int val)
{
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        std::cout<<temp->val<<"->";
        temp = temp->next;
    }
    std::cout<<"NULL"<<std::endl;
}

int main()
{
    Node* head = NULL;  //initially head is pointing to nothing
    insertatHead(head, 2);
    display(head);
    insertatHead(head, 1);
    display(head);
    return 0;
}