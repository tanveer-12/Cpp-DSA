// Delete a node from the start
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

    void deleteatStart()
    {
        if(head == NULL)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        if(head == NULL)           //if DLL had only 1 node
        {
            tail = NULL;
        }
        else                      //2nd node is present in DLL
        {
            head->prev = NULL;
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
    dll.insertatEnd(10);
    dll.insertatEnd(9);
    dll.insertatEnd(8);
    dll.insertatEnd(7);
    dll.insertatEnd(6);
    dll.insertatEnd(5);
    dll.display();
    dll.deleteatStart();
    dll.display();
    return 0;
}

