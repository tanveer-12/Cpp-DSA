// Given the head of a linked list, delete every alternate element from the list 
// starting from the second element

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
        std::cout<<"NULL";
    }
};

void deleteAlternateNodes(Node* &head)
{
    Node *current_node = head;
    while(current_node != NULL && current_node->next != NULL)
    {
        Node *temp = current_node->next;    //node to be deleted
        current_node = current_node->next->next;
        free(temp);
        current_node = current_node->next;
    }
}

int main()
{
    LinkedList li;
    li.insertatEnd(1);
    li.insertatEnd(2);
    li.insertatEnd(3);
    li.insertatEnd(4);
    li.insertatEnd(5);
    li.display();
    deleteAlternateNodes(li.head);
    li.display();
    return 0;
}