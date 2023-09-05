//given the head of a singly linked list, reverse the list and return the reversed list
// by  --RECURSION--
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
        temp -> next= new_node ;
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

Node* reverseLLrecursive(Node* &head)
{
    //base case
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    //recursive case
    Node *new_head = reverseLLrecursive(head->next);
    head->next->next = head;
    head->next = NULL;    //head is now pointing to last node
    return new_head;
}

int main()
{
    LinkedList li;
    li.insertatEnd(1);
    li.insertatEnd(2);
    li.insertatEnd(3);
    li.insertatEnd(4);
    li.insertatEnd(5);
    li.display();
    li.head = reverseLLrecursive(li.head);
    li.display();
    return 0;
}









