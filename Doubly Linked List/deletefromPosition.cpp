// delete a node at an arbitrary position
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
        head ->prev = new_node;
        head = new_node;
        return;
    }

    void deletefromPosition(int k)
    {
        //assuming k is less than or equal to length of the DLL
        Node *temp = head;
        int counter = 1;
        while( counter < k)
        {
           temp = temp->next;
           counter++;
        }

        //now temp ois pointing to the node at kth position

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }

    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            std::cout<<temp->val<<" ";
            temp = temp->next;
        }
        std::cout<<std::endl;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insertatStart(10);
    dll.insertatStart(9);
    dll.insertatStart(8);
    dll.insertatStart(7);
    dll.insertatStart(6);
    dll.display();
    dll.deletefromPosition(3);
    dll.display();
    return 0;
}