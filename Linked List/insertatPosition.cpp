//add a node at any arbitrary position
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

void insertatPosition(Node* &head, int val, int pos)
{
    if(pos == 0)
    {
        insertatHead(head, val);
        return;
    }

    Node* temp = head;
    int current_pos = 0;
    while(current_pos != (pos -1))
    {
        temp = temp->next;
        current_pos++;
    }
    //now temp has reached at node (pos-1)
    Node* new_node = new Node(val);
    new_node->next = temp->next;
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
    Node *head = NULL;
    insertatHead(head,3);
    display(head);
    insertatHead(head,2);
    display(head);
    insertatHead(head,1);
    display(head);
    insertatPosition(head,4,2);
    display(head);
    return 0;
}