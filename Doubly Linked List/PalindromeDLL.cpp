// Given the head of a DLL, find if it is a palindrome or not
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
            tail = new_node;
            head = new_node;
            return;
        }

        new_node->prev = tail;
        tail->next = new_node;
        tail=new_node;
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

bool isPalindrome(Node *head, Node *tail)
{
    //odd case when they are not at middle element together -> head != tail
    //even case when they do not cross each other -> tail != head->prev
    while(head != tail && tail != head->prev)  
    {
        if(head->val != tail->val)
        {
            return false;
        }
        //if not false, then move head forwards and tail backwards
        head = head->next;
        tail = tail->prev;
    }
    //if this loop finishes without returning any false anywhere
    // then we can safely return true
    return true;
}

int main()
{
    DoublyLinkedList dll;
    dll.insertatEnd(1);
    dll.insertatEnd(2);
    dll.insertatEnd(3);
    dll.insertatEnd(3);
    dll.insertatEnd(2);
    dll.insertatEnd(1);
    dll.display();
    std::cout<<isPalindrome(dll.head, dll.tail)<<std::endl;
    return 0;
}