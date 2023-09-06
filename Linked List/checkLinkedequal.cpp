//Given two linked lists, tell if they are equal or not. Two linked lists are equal if they
// have the same data and the arrangement of data is also the same

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

bool checkequalLL(Node* head1, Node* head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->val != ptr2->val)
        {
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    //at this point, either ptr1 is null or ptr2 is null or both are null
    return(ptr1==NULL && ptr2==NULL);    //this will return true
}

int main()
{
    LinkedList l1;
    l1.insertatEnd(1);
    l1.insertatEnd(2);
    l1.insertatEnd(3);

    LinkedList l2;
    l2.insertatEnd(1);
    l2.insertatEnd(2);
    l2.insertatEnd(2);

    l1.display();
    l2.display();
    std::cout<<checkequalLL(l1.head , l2.head)<<std::endl;
    return 0;
}