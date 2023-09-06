//Given 2 sorted linked lists, merge them into 1 singly Linked list such that
// the resulting linked list is also sorted
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
        if (head == NULL)
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

Node* mergeLinkedLists(Node* &head1, Node* &head2)
{
    Node *dummyHeadnode = new Node(-1);

    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *ptr3 = dummyHeadnode;
    while(ptr1 != NULL && ptr2 != NULL)                //while(ptr1 && ptr2)
    {
        if(ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else     //when ptr2->val < ptr1->val
        {
            ptr3->next = ptr2;
            ptr2= ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    //now see if any linkedlist is still not null
    if(ptr1 != NULL)    //if(ptr1 != NULL)
    {
        ptr3->next = ptr1;
    }
    else
    {
        ptr3->next = ptr2;
    }
    return dummyHeadnode->next;  //head of the merged list
}

int main()
{
    LinkedList LL1;
    LL1.insertatEnd(1);
    LL1.insertatEnd(4);
    LL1.insertatEnd(5);
    LL1.display();

    LinkedList LL2;
    LL2.insertatEnd(2);
    LL2.insertatEnd(3);
    LL2.display();

    LinkedList LL3;
    LL3.head = mergeLinkedLists(LL1.head, LL2.head);
    LL3.display();
    return 0;
}