//given head, head of the LL, determine if the LL is a palindrome or not
// 1->2->3->3->2->1  palindrome yes
// 1->2->3->2->1  palindrome yes

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

bool isPalindrome(Node *head)
{
    //1. find the middle element
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL)   //while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    //now slow is pointing to the middle element
    //2. separate the linked list from middle

    Node *curr = slow->next;  // to store the link before pointing it to null
    Node *prev = slow;
    slow->next = NULL;

    //3. reversing the 2nd half of the LL
    while(curr != NULL)
    {
        Node *next_node = curr->next;
        curr->next = prev;
        prev = curr;   //move ahead
        curr = next_node;    //move ahead
    }

    //4. to check is the LL's are equal 
    Node *head1 = head;
    Node *head2 = prev;

    while(head1 != NULL && head2 != NULL)
    {
        if(head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int main()
{
    LinkedList l1;
    l1.insertatEnd(1);
    l1.insertatEnd(2);
    l1.insertatEnd(3);
    l1.insertatEnd(3);
    l1.insertatEnd(2);
    l1.insertatEnd(1);
    l1.display();
    std::cout<<isPalindrome(l1.head)<<std::endl;
    return 0;
}