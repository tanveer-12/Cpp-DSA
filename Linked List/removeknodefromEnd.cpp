//Given the head of a linked list, remove the kth node from the end of the list and return its head
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

//assuming that value of k is less than or equal to length of linked list
void removeKnode(Node* &head, int k)
{
    Node *ptr1 = head;
    Node *ptr2 = head;

    //move ptr2 by k steps ahead
    int count = k;
    while(count --)
    {
        ptr2 = ptr2->next;
    }

    //when k is equal to the length of the list
    if(ptr2 == NULL)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return;
    }

    //when ptr2 is k steps ahead of ptr1
    //when ptr2 is at null(end of list), ptr1 will be at node to be deleted

    //whenever we need to delete a node, we always go till the node which is just before
    // the node to be deleted. so if we want to delete 4 here, we will go till 3 and then cut 3->4
    // and join 3 to 5, i.e. 3->5
    while(ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    //now ptr1 is pointing to the node before kth node from end
    // node to be deleted is ptr1->next
    Node *temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
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
    removeKnode(l1.head, 3);
    l1.display();
    return 0;
}