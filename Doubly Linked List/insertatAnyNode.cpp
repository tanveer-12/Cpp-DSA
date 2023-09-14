// Add a new node at any Node
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
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
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

    void inseertatAnyNode(int val, int k)
    {
        //assuming k is less than or equal to length of DLL
        Node *temp = head;
        int count = 1;
        while(count < (k-1))
        {
            temp = temp->next;
            count++;
        }
        //temp will point at the node (k-1)th position
        Node *new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertatStart(1);
    dll.insertatStart(2);
    dll.insertatStart(3);
    dll.insertatStart(4);
    dll.insertatStart(5);
    dll.display();
    dll.inseertatAnyNode(10,2);
    dll.display();
    return 0;
}