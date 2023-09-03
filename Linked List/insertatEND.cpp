//add a node at the end
#include <iostream>

class Node
{
    public:
    int val;
    Node* next;

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

void insertatTail(Node* &head, int val)
{
    Node* new_node = new Node(val);

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    } //when temp has reached at the end

    temp->next = new_node;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        std::cout<<temp->val<<"->";
        temp = temp->next;
    }
    std::cout<<"NULL"<<std::endl;
}

int main()
{
    Node* head = NULL;
    insertatHead(head,1);
    display(head);
    insertatHead(head, 2);
    display(head);  
    insertatTail(head,3);
    display(head);
    return 0;
}