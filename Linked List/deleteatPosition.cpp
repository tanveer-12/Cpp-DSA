//delete the node at any arbitrary position
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

void deleteatHead(Node* &head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}

void deleteatPosition(Node* &head, int pos)
{
    if(pos == 0)
    {
        deleteatHead(head);
        return;
    }
    int current_pos = 0;
    Node *prev = head;
    while(current_pos != (pos - 1))
    {
        prev = prev->next;
        current_pos++;
    }
    //prev is pointing to node (pos - 1)
    Node *temp = prev->next;
    prev->next = prev->next->next;
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
    insertatHead(head, 7);
    display(head);
    deleteatPosition(head,2);
    display(head);
    return 0;
}