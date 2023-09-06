// Given the heads of two singly linked lists headA and headB, return the node at which the 
// two lists intersect. If two linked lists have no intersection at all, return NULL

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
        std::cout<<"NULL"<<std::endl;
    }
};

int getLength(Node* head)
{
    Node *temp = head;
    int length = 0;
    while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

Node* moveheadbyK(Node* head, int k)
{
    Node *ptr = head;
    while(k--)
    {
        ptr = ptr->next;
    }
    return ptr;
}

Node* getIntersection(Node* head1, Node* head2)
{
    //step1: calculate lengths of both linked lists
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    //step2: find difference 'k' and move the longer linkedlist pointer by k steps
    Node *ptr1, *ptr2;
    if(l1 > l2)    //LL1 is longer
    {
        int k = l1 - l2;
        ptr1 = moveheadbyK(head1, k);
        ptr2 = head2;
    }
    else           //LL2 is longer
    {   
        int k = l2 - l1;
        ptr1 = head1;
        ptr2 = moveheadbyK(head2, k);
    }
    //step3: compare ptr1 and ptr2 nodes
    while(ptr1 != NULL)
    {
        if(ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;   //if no intersection is found, return NULL
}

int main()
{
    LinkedList LL1;
    LL1.insertatEnd(1);
    LL1.insertatEnd(2);
    LL1.insertatEnd(3);
    LL1.insertatEnd(4);
    LL1.insertatEnd(5);
    //1->2->3->4->5->NULL

    LinkedList LL2;
    LL2.insertatEnd(6);
    LL2.insertatEnd(7);

    LL2.head->next->next = LL1.head->next->next->next;
    //6->7->4->5

    Node *intersection = getIntersection(LL1.head, LL2.head);
    if(intersection != NULL)
    {
        std::cout<<intersection->val<<std::endl;
    }
    else
    {
        std::cout<<"-1"<<std::endl;
    }
    return 0;
}