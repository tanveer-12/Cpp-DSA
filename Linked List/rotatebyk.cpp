// Guven the head of a LL, rotate the list to the right by k places
// 1->2->3->4->5->NULL  ,,,,rotate by k=2
// 4->5->1->2->3->NULL

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

Node* rotatebyK(Node* &head, int k)
{
    //1. find length of LL
    int n = 0;

    //2. find tail node
    Node *tail = head;

    while(tail->next != NULL)
    {
        n++;
        tail = tail->next;
    }
    n++;        //for including last node 

    k = k % n;
    if( k == n)         //when k = mn ----> k is a multiple of n
    {   
        return head;
    }

    tail->next = head;

    //3. traverse to n-k node
    Node *temp = head;
    for(int i = 1; i< (n-k); i++)
    {
        temp = temp->next;
    }

    //temp is not pointing to the (n-k)th node

    Node *new_head = temp->next;
    temp->next = NULL;
    return new_head;
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
    l1.head = rotatebyK(l1.head, 3);
    l1.display();
    return 0;
}

