// Add a node at the end
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
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        head->prev = new_node;
        new_node->next = head;
        head = new_node;
        return;
    }

    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            std::cout<<temp->val<<"<->";
            temp = temp->next;
        }
        std::cout<<"NULL"<<std::endl;
    }

    void insertatEnd(int val)
    {
        Node *new_node = new Node(val);
        if(tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertatStart(1);
    dll.insertatStart(2);
    dll.insertatStart(3);
    dll.display();
    dll.insertatEnd(4);
    dll.insertatEnd(5);
    dll.insertatEnd(6);
    dll.display();
}