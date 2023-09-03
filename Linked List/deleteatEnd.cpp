//delete the node at the end of the linked list
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

void deleteatEnd(Node* &head)
{
    Node *second_last = head;
    while(second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    // now second_last points to the second last element
    Node *temp = second_last->next;   //last node to be deleted
    second_last->next = NULL;
    free(temp);
}

void insertatHead(Node* &head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        std::cout<<temp->val<<"->";
        temp= temp -> next ;
    }
    std::cout<<"NULL"<<std::endl;
}

int main()
{
    Node *head = NULL;
    insertatHead(head , 10 );
    display(head);
    insertatHead(head, 9);
    display (head);
    insertatHead(head, 8);
    display(head);
    deleteatEnd(head);
    display(head);
    return 0;
}