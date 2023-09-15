// Given the head of DLL, delete the nodes whose neighbours have the same value
// Traverse the list from right to left (i.e. from tail to head)
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
        new_node->prev = tail;
        tail -> next=  new_node ;
        tail = new_node;
        return;
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

void deleteSameNeighbourNode(Node* &head, Node* &tail)
{
    Node *curr = tail->prev;  //starting from 2nd last node
    while(curr != head)
    {
        Node *prevNode = curr->prev;
        Node *nextNode = curr->next;
        if(prevNode->val == nextNode->val)
        {
            prevNode->next = curr->next;  //curr->prev->next = curr->ne
            nextNode->prev = curr->prev;   // curr->next->prev = curr->prev
            free(curr);
        }
        curr = prevNode;    //moving curr from right to left ahead
    }
}

int main()
{
    DoublyLinkedList dll;
    dll.insertatEnd(2);
    dll.insertatEnd(1);
    dll.insertatEnd(1);
    dll.insertatEnd(2);
    dll.insertatEnd(1);
    dll.display();
    deleteSameNeighbourNode(dll.head, dll.tail);
    dll.display();
    return 0;
}