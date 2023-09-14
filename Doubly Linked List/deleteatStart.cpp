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

    void insertatStart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)     //if LL is empty
        {
            head = new_node;
            tail = new_node;
            return;
        }
        //when LL is not empty then,

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
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
    dll.insertatStart(1);
    dll.insertatStart(2);
    dll.insertatStart(3);
    dll.insertatStart(4);
    dll.insertatStart(5);
    dll.insertatStart(6);
    dll.display();
    dll.deleteatStart();
    dll.display();
    return 0;
}

