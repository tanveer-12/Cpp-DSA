//Given the head of sorted linked list, delete all duplicates such that each 
// element appears only once. Return the linked list sorted as well

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

class Linkedlist
{
    public:
    Node *head;

    Linkedlist()
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

void deleteduplicatenodes(Node* &head)
{
    Node *current_node = head;
    while(current_node)    //also means (current_node != NULL)
    {
        while(current_node->next != NULL && current_node->val == current_node->next->val)
        {  //delete current_node->next
            Node *temp = current_node->next;    //node to be deleted
            current_node->next = current_node->next->next;
            free(temp);
        }
        // this loop will end when current_node and next node values are different
        // or linked list ends
        current_node = current_node->next;
    }
}

int main()
{
    Linkedlist li;
    li.insertatend(1);
    li.insertatend(2);
    li.insertatend(2);
    li.insertatend(3);
    li.insertatend(3);
    li.insertatend(3);
    li.display();
    deleteduplicatenodes(li.head);
    li.display();
    return 0;
}