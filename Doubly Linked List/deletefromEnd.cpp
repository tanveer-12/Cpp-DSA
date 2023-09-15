// delete a node from the end
#include <iostream>
class Node
{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int data)
    {
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
    public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertatStart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL || tail==NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void deletefromEnd()
    {
        if(head == NULL || tail == NULL)
        {
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        if(tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        free(temp);
        return;
    }

    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            std::cout<<temp->val<<" <-> ";
            temp = temp->next;
        }
        std::cout<<"NULL"<<std::endl;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertatStart(10);
    dll.insertatStart(9);
    dll.insertatStart(8);
    dll.insertatStart(7);
    dll.display();
    dll.deletefromEnd();
    dll.display();
    return 0;
}