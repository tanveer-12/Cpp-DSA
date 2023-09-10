// Given the head of the linked list, group all the nodes with odd indices together followed by 
// the nodes with even indices and return the reordered list
// 1->2-3->4->5
// 1->3->5->2->4

#include <iostream>
class Node
{
    public:
    int val;
    Node* next = NULL;

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
        std::cout<<"NULL"<<std::endl;
    }
};

Node* oddeven(Node *&head)
{
    if(head == NULL)
    {
        return head;
    }
    Node *evenHead = head->next;
    Node *oddptr = head;
    Node *evenptr = evenHead;

    while(evenptr != NULL && evenptr->next != NULL)
    {
        oddptr->next = oddptr->next->next;
        evenptr->next = evenptr->next->next;

        //moving evenptr and oddptr agge ko
        oddptr = oddptr->next;
        evenptr = evenptr->next;
    }
    oddptr->next = evenHead;
    return head;
}

int main()
{
    LinkedList l1;
    l1.insertatEnd(1);
    l1.insertatEnd(2);
    l1.insertatEnd(3);
    l1.insertatEnd(4);
    l1.insertatEnd(5);
    l1.insertatEnd(6);
    l1.display();
    l1.head = oddeven(l1.head);
    l1.display();
    return 0;
}