//delete a node at the start

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

void deleteatStart(Node* &head)
{
    Node *temp = head;  //node to be deleted
    head = head->next;
    free(temp);
}

void display(Node *head)
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
    Node *head = NULL;
    insertatHead(head, 4);
    display(head);
    insertatHead(head, 3);
    display(head);
    insertatHead(head, 2);
    display(head);
    insertatHead(head, 1);
    display(head);
    deleteatStart(head);
    display(head);
    return 0;
}